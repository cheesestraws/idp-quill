using System.Linq;
using System.IO;
using System.Text;

namespace Quill
{
    public enum TokenType { UNKNOWN, SEMICOLON, COLON, DOT, COMMA, NUMBER, ADDRESS, TEXT, NL, EOF, WHITESPACE  }

    public struct Token
    {
        public Token(TokenType ttype, int row, int col, string ttext)
        {
            TType = ttype; Row = row; Col = col; TText = ttext;
        }
        public TokenType TType;
        public int Row;
        public int Col;
        public string TText;
    }

    public class Lexer
    {
        private string[] _text;
        private int _row, _col;
        private char _prevSym;

        public bool SkipWhitespace { get; set; }

        public Lexer(string fname)
        {
            // First convert!
            byte[] bytes = File.ReadAllBytes(fname);
            for (int i = 0; i < bytes.Length; i++)
                if (bytes[i] == 0x95) bytes[i] = 0x7E; // cc
                else if (bytes[i] == 0x94) bytes[i] = 0x7B; //ss
                else if (bytes[i] == 0xA0) bytes[i] = 0x60; // zz
                else if (bytes[i] == 0x92) bytes[i] = 0x5E; // CC
                else if (bytes[i] == 0xa2) bytes[i] = 0x5B; // SS
                else if (bytes[i] == 0x90) bytes[i] = 0x40; // ZZ
                /* nuclear char */
                else if (bytes[i] == 0x8f) bytes[i] = (byte)'o'; // button
                /* german chars... */
                else if (bytes[i] == 0x9E) bytes[i] = (byte)'o';
                else if (bytes[i] == 0x9F) bytes[i] = (byte)'s';
                else if (bytes[i] == 0xA4) bytes[i] = (byte)'u';
                else if (bytes[i] == 0xA1) bytes[i] = (byte)'a';
                /* spectrum chars */
                else if (bytes[i] == 0x96) bytes[i] = (byte)'*';
                else if (bytes[i] == 0x97) bytes[i] = (byte)'*';
                else if (bytes[i] == 0x9a) bytes[i] = (byte)'z';
                else if (bytes[i] == 0x9b) bytes[i] = (byte)'x';
                else if (bytes[i] == 0x9d) bytes[i] = (byte)'*';

            File.WriteAllBytes(fname + ".q", bytes);

            // Now read.
            _text=File.ReadAllLines(fname+".q");
            _row = 0; _col = 0;
            _prevSym = '\0';

            SkipWhitespace = true;
        }

        private char NextSymbol()
        {
            // Do we have a putback symbol?
            if (!'\0'.Equals(_prevSym))
            {
                char symbol = _prevSym;
                _prevSym = '\0';
                return symbol;
            }
            // Pass the last row?
            if (_row == _text.Length) return '\0';
            // If we are here it's not the last row.
            if (_text[_row].Length==_col) // Over the edge of the row?
            {
                _row++; _col = 0; // Move to next row.
                if (_row == _text.Length) return '\0'; // Pass last row?
                return '\n';
            }
            // if we are here, we are at the right position.
            if (string.IsNullOrEmpty(_text[_row]))
            {
                _row++; _col = 0; return ' ';
            } else
                return _text[_row][_col++];
        }

        public Token NextToken()
        {
            // Parsed text.
            StringBuilder sb = new StringBuilder();
            // Fetch.
            char ch = NextSymbol();
            // Skip over whitespace.
            if (SkipWhitespace || _col==1) while (ch == '\t' || ch == ' ' || ch == '\r') ch = NextSymbol();
            // Current position (after skiping over whitespace)
            int row = _row, col = _col;
            // Identify token.
            if (ch == '\0') return new Token(TokenType.EOF, _row, _col, string.Empty);
            else if (ch == '\n') return new Token(TokenType.NL, _row, _col, string.Empty);
            else if (ch == ';') return new Token(TokenType.SEMICOLON, _row, _col, ";");
            else if (ch == ':') return new Token(TokenType.COLON, _row, _col, ":");
            else if (ch == '.') return new Token(TokenType.DOT, _row, _col, ".");
            else if (ch == ',') return new Token(TokenType.COMMA, _row, _col, ",");
            else if (IsValidChar(ref ch))
            { // Extract text.
                while (IsValidChar(ref ch)) { sb.Append(ch); ch = NextSymbol(); } // Add punctuation to the token.
                // Try to recognize 4 digit hex.
                if ((IsHex16(sb.ToString()) && ch == ':')) {
                    _prevSym = '\0'; // No previous symbol.
                    sb.Append(ch);
                    return new Token(TokenType.ADDRESS, row, col, sb.ToString());
                } else if (IsNumber(sb.ToString())) { // Try to recognize a numer.
                    _prevSym = ch;
                    return new Token(TokenType.NUMBER, row, col, sb.ToString());
                } else {
                    // Just a word!
                    _prevSym = ch; // Put symbol back.
                    return new Token(TokenType.TEXT, row, col, sb.ToString());
                }
            }
            else
                return new Token(TokenType.UNKNOWN, row, col, ch.ToString());
        }

        public bool IsNumber(string s)
        {
            foreach (char ch in s) if (!"0123456789".Contains(ch)) return false;
            return true;
        }

        public bool IsHex16(string s)
        {
            if (s.Length != 4) return false;
            foreach (char c in s) if (!"0123456789abcdefABCDEF".Contains(c)) return false;
            return true;
        }

        public bool IsValidChar(ref char ch)
        {
            bool ischar = false;
            if (!SkipWhitespace) ischar = ' '.Equals(ch);
            ischar = ischar || char.IsLetterOrDigit(ch);
            ischar = ischar || "[]$_-()!?+=\"'&#{}^~`@".Contains(ch) ;
            return ischar;
        }
        
    }
}
