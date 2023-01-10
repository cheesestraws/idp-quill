using System;
using System.IO;
using System.Linq;

namespace Quill
{
    class Program
    {
        static void Main(string[] args)
        {
            if (args.Count()!=1)
            {
                Console.WriteLine("Invalid args. Usage: quill2c <unquill-file>");
                Environment.Exit(1);
            }

            Console.WriteLine("Compiling...");
            CodeGen codeGen = new CodeGen(args[0]);
            Game game = codeGen.Compile();
            if (game == null) Environment.Exit(1);

            Console.WriteLine("Generating code...");

            // First export.
            codeGen.ExportLocations(game, @"src\data\locations.c");
            codeGen.ExportWords(game, @"src\data\words.c");
            codeGen.ExportObjects(game, @"src\data\objects.c");
            codeGen.ExportMessages(game, @"src\data\messages.c");
            codeGen.ExportSysMessages(game, @"src\data\sysmessages.c");
            codeGen.ExportRules(game, @"src\data\rules.c");

            // Now insert dates, number of items...
            codeGen.UpdateFile(@"src\data\rules.h", DateTime.Today, game.Events.Count + game.Connections.Count);
            codeGen.UpdateFile(@"src\data\objects.h", DateTime.Today, game.PlayerMaxObjects, game.Objects.Length);
            codeGen.UpdateFile(@"src\data\words.h", DateTime.Today, game.Words.Count);

            // Finally rename the file.
            string ftarget = Path.GetFileNameWithoutExtension(args[0]);
            codeGen.Rename(@"src\to-rename.c", @"src\" + ftarget + ".c");

            Console.WriteLine("Done.");
            
        }
    }
}
