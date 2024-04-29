#ifndef YYTOKENTYPE
#define YYTOKENTYPE

enum yytokentype {
    T_IF = 256,  // Početi od 256 jer su vrijednosti 0-255 rezervirane za ASCII znakove
    T_WHILE,
    T_RETURN,
    T_FOR,
    T_FOREACH,
    T_SWITCH,
    T_CASE,
    T_DEFAULT,
    T_BREAK,
    T_CONTINUE,
    T_THIS,
    T_INT,
    T_DOUBLE,
    T_CHAR,
    T_STRING,
    T_BOOL,
    T_VOID,
    T_ENUM,
    T_AND,
    T_OR,
    T_NOT,
    T_TRUE,
    T_FALSE,
    T_IDENTIFIER,
    T_DECIMAL,
    T_HEXADECIMAL,
    T_DOUBLE_LITERAL,
    T_STRING_LITERAL,
    T_PLUS,
    T_MINUS,
    T_ASTERISK,
    T_SLASH,
    T_PERCENT,
    T_BACKSLASH,
    T_LESS,
    T_LESS_EQ,
    T_GREATER,
    T_GREATER_EQ,
    T_ASSIGN,
    T_EQUAL,
    T_NOT_EQUAL,
    T_AND_OP,
    T_OR_OP,
    T_NOT_OP,
    T_SEMICOLON,
    T_COMMA,
    T_DOT,
    T_LPAREN,
    T_RPAREN,
    T_ERROR,
    T_UNKNOWN
};

#endif /* YYTOKENTYPE */ 

