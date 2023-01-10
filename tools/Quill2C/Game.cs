using System.Collections.Generic;
using System.Text;

namespace Quill
{
    public class GameObject
    {
        public int Id;
        public string Name;
        public int? InitialLocation;
    }

    public class GameConnection
    {
        public string Word;
        public int From;
        public int To;
    }

    public class GameFunction
    {
        public bool Process;
        public string FnName;
        public virtual int Skip() { return 1; }
        public virtual void Append(StringBuilder sb, string prefix)
        {
            sb.AppendFormat("{0}FN_{1}", prefix, FnName);
        }
    }

    public class GameFunction1Parameter : GameFunction
    {
        public string Parameter1;
        public override void Append(StringBuilder sb, string prefix)
        {
            sb.AppendFormat("{0}FN_{1},{2}", prefix, FnName, Parameter1);
        }
        public override int Skip()
        {
            return 2;
        }
    }

    public class GameFunction2Parameters : GameFunction1Parameter
    {
        public string Parameter2;
        public override void Append(StringBuilder sb, string prefix)
        {
            sb.AppendFormat("{0}FN_{1},{2},{3}", prefix, FnName, Parameter1, Parameter2);
        }
        public override int Skip()
        {
            return 3;
        }
    }

    public class GameEvent
    {
        public GameEvent()
        {
            GameFunctions = new List<GameFunction>();
        }
        public bool Process;
        public string W1;
        public string W2;
        public List<GameFunction> GameFunctions;
    }

    public class Game
    {
        // Max objects to carry...
        public int PlayerMaxObjects;
        
        // Messages.
        public int NumMessages;
        public string[] Messages;

        // Words.
        public Dictionary<string,int> Words;

        // System messages. 
        public int NumSysMessages;
        public string[] SysMessages;

        // Locations.
        public int NumLocations;
        public string[] Locations;

        // Objects.
        public int NumObjects;
        public GameObject[] Objects;

        // Game connections.
        public List<GameConnection> Connections;

        // And game events.
        public List<GameEvent> Events;
    }
}
