using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Text;
using System.Threading;
using System.Xml.Linq;

namespace Quill
{
    public class Parser
    {
        private Lexer _lex;
        private Game _game;
        public Parser(Lexer lex, Game game)
        {
            _lex = lex;
            _game = game;
        }

        private Token _token;

        private bool Accept(TokenType ttype, string ttext = null)
        {
            if (ttype == _token.TType && (
                (ttext == null
                || ttext.Equals(_token.TText, StringComparison.InvariantCultureIgnoreCase)
                )))
            {
                _token = _lex.NextToken();
                return true;
            }
            return false;
        }

        private bool Expect(TokenType ttype, string ttext = null)
        {
            if (Accept(ttype, ttext)) return true;
            throw new System.Exception(string.Format("Unexpected symbol {0} at {1}:{2}{3}", _token.TText, _token.Row, _token.Col, Environment.NewLine));
        }

        // statement = comment | configuration
        public void Parse()
        {
            _token = _lex.NextToken();
            ParseConfig();
            ParseEventTable();
            ParseProcessTable();
            SkipLines();
            ParseObjects();
            ParseLocations();
            ParseMessages();
            ParseConnections();
            ParseWords();
            ParseInitObjects();
            ParseSystemMessages();
        }

        private void SkipComments()
        {
            // Skip over comments.
            while (Accept(TokenType.SEMICOLON))
            {
                while (!Accept(TokenType.NL))
                    _token = _lex.NextToken();
            }
        }

        private void SkipLines()
        {
            // Skip over comments.
            while (Accept(TokenType.NL)) ;
        }

        private void ParseConfig()
        {
            SkipComments();
            // Followed by address.
            Expect(TokenType.ADDRESS);
            // Expect Player can carry 6 objects.
            Expect(TokenType.TEXT, "Player");
            Expect(TokenType.TEXT, "can");
            Expect(TokenType.TEXT, "carry");
            string pmo = _token.TText; Expect(TokenType.NUMBER); _game.PlayerMaxObjects = int.Parse(pmo);
            Expect(TokenType.TEXT, "objects");
            Expect(TokenType.DOT);
            SkipLines();
        }

        private void ParseEvents(bool process=false)
        {
            // Two parts of each event. Conditions and Actions.
            bool repeatEvents = false;
            while (repeatEvents || Accept(TokenType.ADDRESS))
            {
                repeatEvents = false;
                string kw1 = _token.TText; Expect(TokenType.TEXT);
                string kw2 = _token.TText; Expect(TokenType.TEXT);

                GameEvent ev = new GameEvent() { Process=process, W1 = kw1, W2 = kw2, GameFunctions = new List<GameFunction>() };

                // Now condition rows.
                Expect(TokenType.TEXT, "Conditions");
                Expect(TokenType.COLON);
                Expect(TokenType.NL);

                while (Accept(TokenType.ADDRESS))
                {
                    if (Accept(TokenType.TEXT, "AT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "AT", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "NOTAT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "NOTAT", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "ATLT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "ATLT", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "ATGT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process = process, FnName = "ATGT", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "NOTCARR"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "NOTCARR", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "CARRIED"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "CARRIED", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "WORN"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "WORN", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "NOTWORN"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "NOTWORN", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "PRESENT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "PRESENT", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "ABSENT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "ABSENT", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "NOTZERO"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "NOTZERO", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "ZERO"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "ZERO", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "LT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "LT", Parameter1 = p1, Parameter2=p2 });
                    }
                    else if (Accept(TokenType.TEXT, "GT"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "GT", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "EQ"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "EQ", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "CHANCE"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "CHANCE", Parameter1 = p1 });
                    }
                }

                // And prepare for action rows.
                Expect(TokenType.TEXT, "Actions");
                Expect(TokenType.COLON);
                Expect(TokenType.NL);

                while (Accept(TokenType.ADDRESS))
                {
                    if (_token.Col == 7)
                        repeatEvents = true;
                    else if (Accept(TokenType.TEXT, "SET"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "SET", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "GOTO"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "GOTO", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "REMOVE"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "REMOVE", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "CLEAR"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "CLEAR", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "MESSAGE"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "MESSAGE", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "DROP"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "DROP", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "WEAR"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "WEAR", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "GET"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "GET", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "PAUSE"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "PAUSE", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "CREATE"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "CREATE", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "DESTROY"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction1Parameter() { Process=process, FnName = "DESTROY", Parameter1 = p1 });
                    }
                    else if (Accept(TokenType.TEXT, "BEEP"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        // Don't beep (for now)
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "BEEP", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "SWAP"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "SWAP", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "PLUS"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "PLUS", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "MINUS"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process = process, FnName = "MINUS", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "LET"))
                    {
                        string p1 = _token.TText;
                        Expect(TokenType.NUMBER);
                        string p2 = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction2Parameters() { Process=process, FnName = "LET", Parameter1 = p1, Parameter2 = p2 });
                    }
                    else if (Accept(TokenType.TEXT, "DESC"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "DESC" });
                    }
                    else if (Accept(TokenType.TEXT, "OK"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "OK" });
                    }
                    else if (Accept(TokenType.TEXT, "QUIT"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process = process, FnName = "QUIT" });
                    }
                    else if (Accept(TokenType.TEXT, "DONE"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "DONE" });
                    }
                    else if (Accept(TokenType.TEXT, "TURNS"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "TURNS" });
                    }
                    else if (Accept(TokenType.TEXT, "SCORE"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "SCORE" });
                    }
                    else if (Accept(TokenType.TEXT, "INVEN"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "INVEN" });
                    }
                    else if (Accept(TokenType.TEXT, "END"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "END" });
                    }
                    else if (Accept(TokenType.TEXT, "SAVE"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "SAVE" });
                    }
                    else if (Accept(TokenType.TEXT, "LOAD"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "LOAD" });
                    }
                    else if (Accept(TokenType.TEXT, "ANYKEY"))
                    {
                        Expect(TokenType.NL);
                        ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "ANYKEY" });
                    }
                }

                ev.GameFunctions.Add(new GameFunction() { Process=process, FnName = "EOF" });

                // Add to game functions.
                _game.Events.Add(ev);
            }
        }

        private void ParseEventTable()
        {
            SkipComments();
            Expect(TokenType.ADDRESS);
            Expect(TokenType.TEXT, "Response");
            Expect(TokenType.TEXT, "[Event]");
            Expect(TokenType.TEXT, "table");
            Expect(TokenType.NL);

            if (_game.Events==null) _game.Events = new List<GameEvent>();
            ParseEvents();

            Expect(TokenType.NL);
        }

        private void ParseProcessTable()
        {
            SkipComments();
            Expect(TokenType.ADDRESS);
            Expect(TokenType.TEXT, "Process");
            Expect(TokenType.TEXT, "[Status]");
            Expect(TokenType.TEXT, "table");
            Expect(TokenType.NL);

            if (_game.Events == null) _game.Events = new List<GameEvent>();
            ParseEvents(true);

            Expect(TokenType.NL);
        }

        private void ParseObjects()
        {
            StringBuilder sb = new StringBuilder();

            Expect(TokenType.TEXT, "There");
            Expect(TokenType.TEXT, "are");
            string objects = _token.TText;
            Expect(TokenType.NUMBER);
            _game.NumObjects = int.Parse(objects);
            _game.Objects = new GameObject[_game.NumObjects];
            Expect(TokenType.TEXT, "Objects");
            Expect(TokenType.DOT);
            SkipLines(); // Skip spaces.

            // Now parse out objects.
            for(int n=0;n<_game.NumObjects;n++)
            {
                _lex.SkipWhitespace = true;
                Expect(TokenType.ADDRESS);
                Expect(TokenType.TEXT,"Object");
                string sono = _token.TText;
                Expect(TokenType.NUMBER);
                int ono = int.Parse(sono);
                Expect(TokenType.COLON);
                _lex.SkipWhitespace = false;
                Expect(TokenType.NL);
                
                // First location.
                sb.Clear();

                int nlCount = 0;
                while(_token.TType!=TokenType.ADDRESS)
                {
                    if (_token.TType == TokenType.NL) sb.AppendLine();
                    else
                        sb.AppendFormat("{0}", _token.TText);

                    // Is it newline?
                    if (_token.TType == TokenType.NL) nlCount++; else nlCount = 0;
                    // Two newlines and last message?
                    if (nlCount == 2 && n == _game.NumObjects - 1)
                        break;
                    _token = _lex.NextToken();
                }

                string o = sb.ToString();
                if (o.EndsWith("\r\n"))
                    o = o.Substring(0, o.Length - 2);
                _game.Objects[ono]=new GameObject() { Name = o, Id=ono };

            }
            _lex.SkipWhitespace = true;
            SkipLines();
        }

        private void ParseLocations()
        {
            StringBuilder sb = new StringBuilder();

            Expect(TokenType.TEXT, "There");
            Expect(TokenType.TEXT, "are");
            string locations = _token.TText;
            Expect(TokenType.NUMBER);
            _game.NumLocations = int.Parse(locations);
            _game.Locations = new string[_game.NumLocations];
            Expect(TokenType.TEXT, "Locations");
            Expect(TokenType.DOT);
            SkipLines(); // Skip spaces.

            // Now parse out locations.
            for (int n = 0; n < _game.NumLocations; n++)
            {
                _lex.SkipWhitespace = true;
                Expect(TokenType.ADDRESS);
                Expect(TokenType.TEXT, "Location");
                string slocno = _token.TText;
                Expect(TokenType.NUMBER);
                int locno = int.Parse(slocno);
                Expect(TokenType.COLON);
                _lex.SkipWhitespace = false;
                Expect(TokenType.NL);

                // First location.
                sb.Clear();
                

                int nlCount = 0;
                while (_token.TType != TokenType.ADDRESS)
                {
                    if (_token.TType == TokenType.NL) sb.AppendLine();
                    else
                        sb.AppendFormat("{0}", _token.TText);

                    // Is it newline?
                    if (_token.TType == TokenType.NL) nlCount++; else nlCount = 0;
                    // Two newlines and last location?
                    if (nlCount == 2 && n == _game.NumLocations - 1)
                        break;
                    _token = _lex.NextToken();
                }

                string loc = sb.ToString();
                if (loc.EndsWith("\r\n"))
                    loc = loc.Substring(0, loc.Length - 2);
                if (loc.EndsWith("\n"))
                    loc = loc.Substring(0, loc.Length - 1);
                _game.Locations[locno] = loc;
            }

            _lex.SkipWhitespace = true;
            SkipLines();
        }

        private void ParseMessages()
        {
            StringBuilder sb = new StringBuilder();

            Expect(TokenType.TEXT, "There");
            Expect(TokenType.TEXT, "are");
            string msgs = _token.TText;
            Expect(TokenType.NUMBER);
            _game.NumMessages = int.Parse(msgs);
            _game.Messages = new string[_game.NumMessages];
            Expect(TokenType.TEXT, "Messages");
            Expect(TokenType.DOT);
            SkipLines(); // Skip spaces.

            // Now parse out Messages.
            for (int n = 0; n < _game.NumMessages; n++)
            {
                _lex.SkipWhitespace = true;
                Expect(TokenType.ADDRESS);
                Expect(TokenType.TEXT, "Message");
                string snummsg = _token.TText;
                Expect(TokenType.NUMBER);
                int nummsg = int.Parse(snummsg);
                Expect(TokenType.COLON);
                _lex.SkipWhitespace = false;
                Expect(TokenType.NL);
                int nlCount = 0;

                // First word of message.
                sb.Clear();

                while (_token.TType != TokenType.ADDRESS)
                {
                    if (_token.TType == TokenType.NL) sb.AppendLine();
                    else
                        sb.AppendFormat("{0}", _token.TText);

                    // Is it newline?
                    if (_token.TType == TokenType.NL) nlCount++; else nlCount = 0;
                    // Two newlines and last message?
                    if (nlCount == 2 && n == _game.NumMessages - 1)
                        break;
                    _token = _lex.NextToken();
                }

                string m = sb.ToString();
                if (m.EndsWith("\r\n"))
                    m = m.Substring(0, m.Length - 2);
                _game.Messages[nummsg] = m;

            }
            _lex.SkipWhitespace = true;
            SkipLines();
        }

        private void ParseConnections()
        {
            _game.Connections = new List<GameConnection>();

            SkipLines(); // Skip spaces.

            // Now parse out objects.
            for (int n = 0; n <= _game.NumLocations; n++)
            {
                Expect(TokenType.ADDRESS);
                Expect(TokenType.TEXT, "Connections");
                Expect(TokenType.TEXT, "from");
                string sfrom = _token.TText;
                Expect(TokenType.NUMBER);
                int from = int.Parse(sfrom);
                Expect(TokenType.COLON);
                Expect(TokenType.NL);
                
                int nlCount = 0;
                while (_token.TType != TokenType.ADDRESS)
                {
                    // Empty row.
                    if (Accept(TokenType.NL))
                    {
                        nlCount++;
                    }
                    else
                    {
                        string word = _token.TText;
                        Expect(TokenType.TEXT);
                        Expect(TokenType.TEXT, "to");
                        string sto = _token.TText;
                        Expect(TokenType.NUMBER);
                        int to_ = int.Parse(sto);

                        // Add!
                        _game.Connections.Add(new GameConnection()
                        {
                            Word=word,
                            From=from,
                            To=to_
                        });

                        nlCount = 0;
                    }
                    SkipLines();                    
                }
            }
            SkipLines();
        }

        private void ParseWords()
        {
            _game.Words = new Dictionary<string, int>();

            if (!Accept(TokenType.NL))
                while(Accept(TokenType.ADDRESS))
                {
                    Expect(TokenType.TEXT, "WORD");
                    string sid = _token.TText;
                    Expect(TokenType.NUMBER);
                    Expect(TokenType.COLON);
                    string sword = _token.TText;
                    Expect(TokenType.TEXT);
                    Expect(TokenType.NL);
                    // Add to word dictionary.
                    _game.Words.Add(sword, int.Parse(sid));
                }
            SkipLines();
        }

        private void ParseInitObjects()
        {
            if (!Accept(TokenType.NL))
                while (Accept(TokenType.ADDRESS))
                {
                    Expect(TokenType.TEXT, "Object");
                    string sobject = _token.TText;
                    Expect(TokenType.NUMBER);
                    Expect(TokenType.TEXT, "is");
                    Expect(TokenType.TEXT, "initially");
                    if (Accept(TokenType.TEXT, "in"))
                    {
                        Expect(TokenType.TEXT, "room");
                        string sroom = _token.TText;
                        Expect(TokenType.NUMBER);
                        Expect(TokenType.DOT);
                        _game.Objects[int.Parse(sobject)].InitialLocation = int.Parse(sroom);
                    } else if (Accept(TokenType.TEXT, "carried")) {
                        Expect(TokenType.DOT);
                        _game.Objects[int.Parse(sobject)].InitialLocation = 254;
                    } else if (Accept(TokenType.TEXT, "worn")) {
                        Expect(TokenType.DOT);
                        _game.Objects[int.Parse(sobject)].InitialLocation = 253;
                    } else
                    {
                        Expect(TokenType.TEXT, "not");
                        Expect(TokenType.TEXT, "created");
                        Expect(TokenType.DOT);
                        _game.Objects[int.Parse(sobject)].InitialLocation = 252;
                    }
                    Expect(TokenType.NL);
                }
            SkipLines();
        }

        private void ParseSystemMessages()
        {
            StringBuilder sb = new StringBuilder();

            Expect(TokenType.TEXT, "There");
            Expect(TokenType.TEXT, "are");
            string smsgs = _token.TText;
            Expect(TokenType.NUMBER);
            _game.NumSysMessages = int.Parse(smsgs);
            _game.SysMessages = new string[_game.NumSysMessages];
            Expect(TokenType.TEXT, "System");
            Expect(TokenType.TEXT, "messages");
            Expect(TokenType.DOT);
            SkipLines(); // Skip spaces.

            // Now parse out system messages.
            for (int n = 0; n < _game.NumSysMessages; n++)
            {
                // 6bc0: System message 28:
                _lex.SkipWhitespace = true;
                Expect(TokenType.ADDRESS);
                Expect(TokenType.TEXT, "System");
                Expect(TokenType.TEXT, "message");
                string snummsg = _token.TText;
                Expect(TokenType.NUMBER);
                int nummsg = int.Parse(snummsg);
                Expect(TokenType.COLON);
                _lex.SkipWhitespace = false;
                Expect(TokenType.NL);
                int nlCount = 0;

                // First word of message.
                sb.Clear();

                while (_token.TType != TokenType.ADDRESS)
                {
                    if (_token.TType == TokenType.NL) sb.AppendLine();
                    else
                        sb.AppendFormat("{0}", _token.TText);

                    // Is it newline?
                    if (_token.TType == TokenType.NL) nlCount++; else nlCount = 0;
                    // Two newlines and last message?
                    if (nlCount == 2 && n == _game.NumMessages - 1)
                        break;
                    _token = _lex.NextToken();
                }

                string m = sb.ToString();
                if (m.EndsWith("\r\n"))
                    m = m.Substring(0, m.Length - 2);
                _game.SysMessages[nummsg] = m;
            }
            _lex.SkipWhitespace = true;
            SkipLines();
        }
    }
}
