typedef enum {
    T_LET = 256,  
    T_IN,
    T_END,
    T_THEN,
    T_FI,
    T_DO,
    T_READ,
    T_WRITE,
    T_IF,
    T_ELSE,
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
    T_SKIP,
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
    T_DECIMAL_LITERAL,
    T_HEXADECIMAL_LITERAL,
    T_DOUBLE_LITERAL,
    T_STRING_LITERAL,
    T_BOOL_LITERAL,
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
    T_SEMICOLON,
    T_COMMA,
    T_DOT,
    T_LPAREN,
    T_RPAREN,
    T_ERROR,
    T_UNKNOWN
} Token;