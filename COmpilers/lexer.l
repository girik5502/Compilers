%option noyywrap
%option yylineno
%option outfile="lexer.yy.c"

%{
	int line_num=1;
    #include <stdio.h>
    #include <stdlib.h>
    #include "parser.tab.h"
    #include "header.h"
    
%}
%option header-file="lex.yy.h"

Digit	[0-9]
Underscores _[_]+

JavaLetter [a-zA-Z_]
JavaLetterOrDigit {JavaLetter}|[0-9]
NonZeroDigit [1-9]
DigitOrUnderscore {Digit}|_
DigitsAndUnderscores {DigitOrUnderscore}{DigitOrUnderscore}?
Digits {Digit}|{Digit}{DigitsAndUnderscores}?{Digit}
DecimalNumeral 0|{NonZeroDigit}{Digits}?|{NonZeroDigit}{Underscores}{Digits} 
IntegerTypeSuffix l|L

SignedInteger [+-]{Digits}
FloatTypeSuffix [fFdD]
SingleCharacter [^'\r\n\\] 
StringCharacter [^"\r\n\\]

IntegerLiteral {DecimalNumeral}{IntegerTypeSuffix}? 
FloatingPointLiteral {Digits}[.]{Digits}?{FloatTypeSuffix}?|[.]{Digits}{FloatTypeSuffix}?|{Digits}{FloatTypeSuffix}?|{Digits}{FloatTypeSuffix}
BooleanLiteral "true"|"false"
CharacterLiteral '{SingleCharacter}'
StringLiteral \"{StringCharacter}*\"
NullLiteral null
Identifier {JavaLetter}{JavaLetterOrDigit}*

%%

[ \t\f\v]             {;}
[\n]                   {line_num++;}
"/*"    {int c;
         while((c = yyinput()) != 0) {
            if(c == '*') {
                if((c = yyinput()) == '/') break;
                else unput(c);
            }
            if(c == '\n') line_num++;
         }
        }
"//"    {int c;
         while((c = yyinput()) != 0) {
            if(c == '\n' || c == '\r') break;
         }
         line_num++;
        }

{IntegerLiteral}                                    {yylval.node=new struct ast_node; yylval.node->label=yytext; return INTEGERLITERAL;}
{FloatingPointLiteral}                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return FLOATINGPOINTLITERAL;}
{CharacterLiteral}                                  {yylval.node=new struct ast_node; yylval.node->label=yytext; return CHARACTERLITERAL;}
{BooleanLiteral}                                    {yylval.node=new struct ast_node; yylval.node->label=yytext; return BOOLEANLITERAL;}
{StringLiteral}                                     {yylval.node=new struct ast_node; yylval.node->label=yytext; return STRINGLITERAL;}
{NullLiteral}                                       {yylval.node=new struct ast_node; yylval.node->label=yytext; return NULLLITERAL;}
"boolean"                                           {yylval.node=new struct ast_node; yylval.node->label=yytext; return BOOLEAN;}
"byte"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return BYTE;}
"short"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return SHORT;}
"int"                                               {yylval.node=new struct ast_node; yylval.node->label=yytext; return INT;}
"long"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return LONG;}
"char"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return CHAR;}
"float"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return FLOAT;}
"double"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return DOUBLE;}
"void"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return VOID;}
"package"                                           {yylval.node=new struct ast_node; yylval.node->label=yytext; return PACKAGE;}
"import"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return IMPORT;}
"class"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return CLASS;}
"extends"                                           {yylval.node=new struct ast_node; yylval.node->label=yytext; return EXTENDS;}
"implements"                                        {yylval.node=new struct ast_node; yylval.node->label=yytext; return IMPLEMENTS;}
"throws"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return THROWS;}
"this"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return THIS;}
"super"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return SUPER;}
"interface"                                         {yylval.node=new struct ast_node; yylval.node->label=yytext; return INTERFACE;}
"public"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return PUBLIC;}
"protected"                                         {yylval.node=new struct ast_node; yylval.node->label=yytext; return PROTECTED;}
"private"                                           {yylval.node=new struct ast_node; yylval.node->label=yytext; return PRIVATE;}
"static"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return STATIC;}
"abstract"                                          {yylval.node=new struct ast_node; yylval.node->label=yytext; return ABSTRACT;}
"final"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return FINAL;}
"native"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return NATIVE;}
"synchronized"                                      {yylval.node=new struct ast_node; yylval.node->label=yytext; return SYNCHRONIZED;}
"transient"                                         {yylval.node=new struct ast_node; yylval.node->label=yytext; return TRANSIENT;}
"volatile"                                          {yylval.node=new struct ast_node; yylval.node->label=yytext; return VOLATILE;}
"if"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return IF;}
"else"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return ELSE;}
"switch"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return SWITCH;}
"case"                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return CASE;}
"default"                                           {yylval.node=new struct ast_node; yylval.node->label=yytext; return DEFAULT;}
"while"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return WHILE;}
"do"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return DO;}
"for"                                               {yylval.node=new struct ast_node; yylval.node->label=yytext; return FOR;}
"break"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return BREAK;}
"return"                                            {yylval.node=new struct ast_node; yylval.node->label=yytext; return RETURN;}
"continue"                                          {yylval.node=new struct ast_node; yylval.node->label=yytext; return CONTINUE;}
"throw"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return THROW;}
"try"                                               {yylval.node=new struct ast_node; yylval.node->label=yytext; return TRY;}
"catch"                                             {yylval.node=new struct ast_node; yylval.node->label=yytext; return CATCH;}
"finally"                                           {yylval.node=new struct ast_node; yylval.node->label=yytext; return FINALLY;}
"new"                                               {yylval.node=new struct ast_node; yylval.node->label=yytext; return NEW;}
"instanceof"                                        {yylval.node=new struct ast_node; yylval.node->label=yytext; return INSTANCEOF;}
{Identifier}                                        {yylval.node=new struct ast_node; yylval.node->label=yytext; return IDENTIFIER;}
"="                                                 {return '=';}
"]"                                                 {return ']';}
"}"                                                 {return '}';}
":"                                                 {return ':';}
"{"                                                 {return '{';}
","                                                 {return ',';}
";"                                                 {return ';';}
")"                                                 {return ')';}
"("                                                 {return '(';}
"."                                                 {return '.';}
"["                                                 {return '[';}
"+"                                                 {return '+';}
"-"                                                 {return '-';}
"~"                                                 {return '~';}
"!"                                                 {return '!';}
"*"                                                 {return '*';}
"/"                                                 {return '/';}
"%"                                                 {return '%';}
"<"                                                 {return '<';}
">"                                                 {return '>';}
"&"                                                 {return '&';}
"^"                                                 {return '^';}
"|"                                                 {return '|';}
"?"                                                 {return '?';}
"<<"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return LSHIFT;}
">>"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return RSHIFT;}
">>>"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return LOGICAL_RSHIFT;}
"<="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return LTEQ;}
">="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return GTEQ;}
"=="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return EQ;}
"!="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return NE;}
"&&"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return AND;}
"||"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return OR;}
"*="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return MULT_ASSIGN;}
"/="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return DIV_ASSIGN;}
"%="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return MOD_ASSIGN;}
"+="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return ADD_ASSIGN;}
"-="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return SUB_ASSIGN;}
"&="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return BIT_AND_ASSIGN;}
"^="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return EXPO_ASSIGN;}
"|="                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return BIT_OR_ASSIGN;}
"<<="                                               {yylval.node=new struct ast_node; yylval.node->label=yytext; return LSHIFT_ASSIGN;} 
">>="                                               {yylval.node=new struct ast_node; yylval.node->label=yytext; return RSHIFT_ASSIGN;} 
">>>="                                              {yylval.node=new struct ast_node; yylval.node->label=yytext; return LOGICAL_RSHIFT_ASSIGN;}
"++"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return INC;}
"--"                                                {yylval.node=new struct ast_node; yylval.node->label=yytext; return DEC;}
<<EOF>>                                             yyterminate();
.                                                   {fprintf(stderr, "Invalid Token at line %d: %s\n", line_num, yytext); exit(1);}
%%

// int yywrap() {
//     if (feof(yyin))
//         return 1;
//     else
//         return 0;
// }
