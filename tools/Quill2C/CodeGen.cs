using System;
using System.IO;
using System.Text;
using System.Linq;
using System.Globalization;

namespace Quill
{
    public class CodeGen
    {
        private string _source;
        public CodeGen(string source)
        {
            // Initialize objects.
            _source = source;
            TabSize = 4;
        }

        public Game Compile()
        {
            Game game = new Game();
            // First parse. This will populate the game structure or throw an exception.
            try
            {
                Parser parser;
                Lexer lexer = new Lexer(_source);
                parser = new Parser(lexer, game);
                parser.Parse();
            }
            catch (Exception ex)
            {
                Console.WriteLine("Parse error: {0}", ex.Message);
                return null;
            }
            // If we are here then we have a game object populated.
            return game;
        }

        public void ExportMessages(Game game, string fname)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(
                CHeader(
                fname,
                "game messages.",
                "Tomaz Stih",
                "tstih"));
            sb.Append(StringTable("messages", game.Messages));
            File.WriteAllText(fname, sb.ToString());
        }

        public void ExportSysMessages(Game game, string fname)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(
                CHeader(
                fname,
                "system messages.",
                "Tomaz Stih",
                "tstih"));
            sb.Append(StringTable("sys_messages", game.SysMessages));
            File.WriteAllText(fname, sb.ToString());
        }

        public void ExportLocations(Game game, string fname)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(
                CHeader(
                fname,
                "game locations (adventure \"rooms\").",
                "Tomaz Stih",
                "tstih"));
            sb.Append(StringTable("locations", game.Locations));
            File.WriteAllText(fname, sb.ToString());
        }

        public void ExportObjects(Game game, string fname)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(
                CHeader(
                fname,
                "game objects with initial locations.",
                "Tomaz Stih",
                "tstih"));

            sb.AppendLine("#include <data/objects.h>"); sb.AppendLine();

            sb.AppendFormat("const object_t {0}[] = {{ {1}", "objects", Environment.NewLine);
            string prefix = " ";
            foreach (var o in game.Objects)
            {
                string objname = "\"" + CString(o.Name) + "\"";
                objname = Tab(objname, 2);
                sb.AppendFormat("{0}{1}{{ {2},{3} }}{4}",
                    Tab("", 1),
                    prefix,
                    objname,
                    o.InitialLocation.HasValue?o.InitialLocation.Value : 255,
                    Environment.NewLine);
                prefix = ",";
            }
            sb.AppendFormat("}};{0}", Environment.NewLine);
            File.WriteAllText(fname, sb.ToString());
        }

        public void ExportWords(Game game, string fname)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(
                CHeader(
                fname,
                "all game words and their indices",
                "Tomaz Stih",
                "tstih"));

            sb.AppendLine("#include <data/words.h>"); sb.AppendLine();

            sb.AppendFormat("const word_t {0}[] = {{ {1}", "words", Environment.NewLine);
            string prefix = " ";
            foreach (var s in game.Words)
            {
                string w = "\"" + CString(s.Key) + "\"";
                w = Tab(w, 2);
                sb.AppendFormat("{0}{1}{{ {2},{3} }}{4}",
                    Tab("", 1),
                    prefix,
                    w,
                    s.Value,
                    Environment.NewLine);
                prefix = ",";
            }
            sb.AppendFormat("}};{0}", Environment.NewLine);
            File.WriteAllText(fname, sb.ToString());
        }


        public void ExportRules(Game game, string fname)
        {
            StringBuilder cmds = new StringBuilder(), fns=new StringBuilder();
            int fnoffset = 0;
            cmds.Append(
                CHeader(
                fname,
                "game rules (actions, connections and processes).",
                "Tomaz Stih",
                "tstih"));
            cmds.AppendLine("#include <data/rules.h>"); cmds.AppendLine();

            cmds.AppendFormat("const command_t {0}[] = {{ {1}", "rules", Environment.NewLine);
            fns.AppendFormat("const uint8_t func[] = {{ {0}", Environment.NewLine);

            /* first processes */
            string prefix = " ";
            string fnPrefix = "";
            foreach (var proc in game.Events.Where(ge=>ge.Process))
            {
                // connection.
                cmds.AppendFormat("{0}{1}{{ CMD_PROC, 0x{2}, {3,5} }}{4}",
                    Tab("", 1),
                    prefix,
                    0.ToString("X4"),
                    fnoffset,
                    Environment.NewLine);

                // Functions
                fns.AppendFormat("{0}", Tab("", 1));
                foreach (var cmd in proc.GameFunctions)
                {
                    cmd.Append(fns, fnPrefix);
                    fnPrefix = ",";
                    fnoffset += cmd.Skip(); 
                }
                fns.AppendLine(); // Newline.
                prefix = ",";
            }

            /* second connections! */
            foreach (var conn in game.Connections)
            {
                // Find word id.
                int wordId = game.Words[conn.Word.ToUpper()];
                // connection.
                cmds.AppendFormat("{0}{1}{{ CMD_CONN, 0x{2}, {3,5} }}{4}{5}",
                    Tab("", 1),
                    prefix,
                    wordId.ToString("X4"),
                    fnoffset,
                    string.Format("     // {0} ({1} --> {2}) ", conn.Word, conn.From, conn.To),
                    Environment.NewLine);
                fns.AppendFormat("{0}{1}FN_AT,{2},FN_GOTO,{3},FN_DESC,FN_EOF{4}",
                    Tab("", 1),
                    prefix,
                    conn.From,
                    conn.To,
                    Environment.NewLine
                    );
                fnoffset += 6; // 6 bytes per move
                prefix = ",";
            }

            // Last events...
            foreach (var proc in game.Events.Where(ge => !ge.Process))
            {
                // connection.
                int w1id = game.Words[proc.W1.ToUpper()];
                if (w1id == 0xff) w1id = 0; // Change _ to absent...
                int w2id = game.Words[proc.W2.ToUpper()];
                if (w2id == 0xff) w2id = 0; // Change _ to absent...
                cmds.AppendFormat("{0}{1}{{ CMD_ACTI, 0x{2}, {3,5} }}{4}",
                    Tab("", 1),
                    prefix,
                    (w1id|(w2id<<8)).ToString("X4"),
                    fnoffset,
                    Environment.NewLine);

                // Functions
                fns.AppendFormat("{0}", Tab("", 1));
                foreach (var cmd in proc.GameFunctions)
                {
                    cmd.Append(fns, fnPrefix);
                    fnPrefix = ",";
                    fnoffset += cmd.Skip();
                }
                fns.AppendLine(); // Newline.
                prefix = ",";
            }

            cmds.AppendFormat("}};{0}", Environment.NewLine);
            fns.AppendFormat("}};{0}", Environment.NewLine);
            File.WriteAllText(fname, cmds.ToString()+Environment.NewLine+fns.ToString());
        }


        #region String Builders
        // Headers.
        public string CHeader(string fname, string desc, string authorFullName, string authorAccount)
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendLine  ("/*");
            sb.AppendFormat(" * {0}{1} *{1}", fname, Environment.NewLine);
            sb.AppendFormat(" * {0}{1} *{1}", desc, Environment.NewLine);
            sb.AppendLine  (" * MIT License (see: LICENSE)");
            sb.AppendFormat(" * Copyright (c) 2022 {0}{1} *{1}", authorFullName, Environment.NewLine, Environment.NewLine);
            sb.AppendFormat(" * {0}   {1}{2} *{2} */{2}", DateTime.Today.ToString("dd.MM.yyyy"),
                authorAccount,
                Environment.NewLine);
            return sb.ToString();
        }

        /* 
         o umlaut 9E
         ss umlaut 9F
         u umlaut A4
         */
        private string CString(string s)
        {
            string nor = s.Replace("\r", "");
            StringBuilder sb = new StringBuilder(), sbspace=new StringBuilder();

            int state = 0;
            for (int i = 0; i < nor.Length; i++)
            {
                switch (state) {
                    case 0:
                        if (nor[i] != ' ') sb.Append(nor[i]);
                        else { sbspace.Clear(); sbspace.Append(' '); state = 1; }
                        break;
                    case 1:
                        if (nor[i] == ' ') sbspace.Append(nor[i]);
                        else if (nor[i] == '\n') { sbspace.Clear(); sb.Append('\n'); state = 0; }
                        else { sb.Append(sbspace.ToString()); sb.Append(nor[i]); state = 0; }
                        break;
                }
            }
            string result= sb.ToString()
                .Replace("\n","\\n")
                .Replace("\"","\\\"");
            return result;
        }


        // Tabbing!
        public int TabSize { get; set; }
        private string Tab(string s, int n)
        {
            if (s.Length < n * TabSize) s=s.PadRight(n * TabSize);
            return s;
        }

        public string StringTable(string name, string[] table)
        {
            StringBuilder sb = new StringBuilder();
            sb.AppendFormat("const char *{0}[] = {{ {1}", name, Environment.NewLine);
            string prefix = " ";
            foreach(string s in table)
            {
                sb.AppendFormat("{0}{1}\"{2}\"{3}",
                    Tab("", 1),
                    prefix,
                    CString(s),
                    Environment.NewLine);
                prefix = ",";
            }
            sb.AppendFormat("}};{0}",Environment.NewLine);
            return sb.ToString();
        }
        #endregion // String Builders

        #region Updater(s)
        public void UpdateFile(string fname, DateTime dt, int nelements, int? nelements2=null) {
            // Find {0}, replace with dt, Find {1}, replace with nelements
            string s = File.ReadAllText(fname);
            if (nelements2.HasValue)
                File.WriteAllText(fname,
                    s
                    .Replace("$DATE$", dt.ToString("dd.MM.yyyy"))
                    .Replace("$NUM$", nelements.ToString())
                    .Replace("$NUM2$", nelements2.Value.ToString())
                );
            else
                File.WriteAllText(fname, 
                    s
                    .Replace("$DATE$", dt.ToString("dd.MM.yyyy"))
                    .Replace("$NUM$", nelements.ToString())
                );
        }

        public void Rename(string fname, string target)
        {
            if (File.Exists(target)) File.Delete(target);
            File.Move(fname, target);
        }
        #endregion // Updater(s)
    }
}