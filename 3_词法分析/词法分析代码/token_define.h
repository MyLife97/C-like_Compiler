#ifndef TOKEN_DEFINE_H_INCLUDED
#define TOKEN_DEFINE_H_INCLUDED

#include <iostream>

//TOEKN_TYPE��ʾtoken��ʲô������+SYMBOL˵���Ǳ�����
//IDENT_TYPE��ʾ��ʶ�������࣬��ʾ���Ǳ������������Ǻ���
//IDENT_OBJC��ʾ��ʶ�������ͣ���int����char�������黹���ַ��������void

#define TOKEN_LENGTH 20
#define TOKEN_LIMIT 10000

enum token_type{
    PLUS,           //+
    SUB,            //-
    MULT,           //*
    DIV,            // /
    BECOME,         // =
    EQLEQL,         // ==
    NEQ,            // !=
    GTR,            // >
    GTREQL,         // >=
    LSS,            // <
    LSSEQL,         // <=
    INT,            // ����
    CHAR,           // �����ַ� 'x'
    STRING,         // �ַ��� ""
    CONST_SYMBOL,   // const
    INT_SYMBOL,     // int
    CHAR_SYMBOL,    // char
    VOID_SYMBOL,    // void
    MAIN_SYMBOL,    // main
    IF_SYMBOL,      // if
    ELSE_SYMBOL,    // else
    SWITCH_SYMBOL,  // switch
    CASE_SYMBOL,    // case
    DEFAULT_SYMBOL, // default
    SCANF_SYMBOL,   // scanf
    PRINTF_SYMBOL,  // printf
    RETURN_SYMBOL,  // return
    DO_SYMBOL,      // do
    WHILE_SYMBOL,   // while
    LEFT_PAR,       // (
    RIGHT_PAR,      // )
    LEFT_BRACKET,   // [
    RIGHT_BRACKET,  // ]
    LEFT_BRACE,     // {
    RIGHT_BRACE,    // }
    COMMA,          // ,
    COLON,          // :
    SEMICOLON,      // ;

    IDENT           // ��ʶ��

    //���Ų��ٵ���������token�ڣ���������char��string
};

static char token_type_enum_to_string[][TOKEN_LENGTH] = {
    "PLUS",           //+
    "SUB",            //-
    "MULT",           //*
    "DIV",            // /
    "BECOME",         // =
    "EQLEQL",         // ==
    "NEQ",            // !=
    "GTR",            // >
    "GTREQL",         // >=
    "LSS",            // <
    "LSSEQL",         // <=
    "INT",            // ����
    "CHAR",           // �����ַ� 'x'
    "STRING",         // �ַ��� ""
    "CONST_SYMBOL",   // const
    "INT_SYMBOL",     // int
    "CHAR_SYMBOL",    // char
    "VOID_SYMBOL",    // void
    "MAIN_SYMBOL",    // main
    "IF_SYMBOL",      // if
    "ELSE_SYMBOL",    // else
    "SWITCH_SYMBOL",  // switch
    "CASE_SYMBOL",    // case
    "DEFAULT_SYMBOL", // default
    "SCANF_SYMBOL",   // scanf
    "PRINTF_SYMBOL",  // printf
    "RETURN_SYMBOL",  // return
    "DO_SYMBOL",      // do
    "WHILE_SYMBOL",   // while
    "LEFT_PAR",       // (
    "RIGHT_PAR",      // )
    "LEFT_BRACKET",   // [
    "RIGHT_BRACKET",  // ]
    "LEFT_BRACE",     // {
    "RIGHT_BRACE",    // }
    "COMMA",          // ,
    "COLON",          // :
    "SEMICOLON",      // ;

    "IDENT"           // ��ʶ��
};

static char token_symbol[][TOKEN_LENGTH]{
    "const",
    "int",
    "char",
    "void",
    "main",
    "if",
    "else",
    "switch",
    "case",
    "default",
    "scanf",
    "printf",
    "return",
    "do",
    "while"
};

union token_value{
    int number;
    char letter;
    std::string *pstring;
};

enum token_value_type{
    NUMBER,
    LETTER,
    PSTRING
};

typedef struct{
    int line;
    int pos;
    token_type t_type;
    token_value t_value;
    token_value_type t_value_type;
}token;

static token *token_table[TOKEN_LIMIT];

#endif // TOKEN_DEFINE_H_INCLUDED
