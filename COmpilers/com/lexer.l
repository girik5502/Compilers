%option noyywrap
%option yylineno
%option outfile="lexer.yy.c"

%{
	int line_num=1;
    #include <stdio.h>
    #include <stdlib.h>
    #include "parser.tab.h"
    
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

{IntegerLiteral}                                    {yylval.str=yytext; return INTEGERLITERAL;}
{FloatingPointLiteral}                              {yylval.str=yytext; return FLOATINGPOINTLITERAL;}
{CharacterLiteral}                                  {yylval.str=yytext; return CHARACTERLITERAL;}
{BooleanLiteral}                                    {yylval.str=yytext; return BOOLEANLITERAL;}
{StringLiteral}                                     {yylval.str=yytext; return STRINGLITERAL;}
{NullLiteral}                                       {yylval.str=yytext; return NULLLITERAL;}
"boolean"                                           {yylval.str=yytext; return BOOLEAN;}
"byte"                                              {yylval.str=yytext; return BYTE;}
"short"                                             {yylval.str=yytext; return SHORT;}
"int"                                               {yylval.str=yytext; return INT;}
"long"                                              {yylval.str=yytext; return LONG;}
"char"                                              {yylval.str=yytext; return CHAR;}
"float"                                             {yylval.str=yytext; return FLOAT;}
"double"                                            {yylval.str=yytext; return DOUBLE;}
"void"                                              {yylval.str=yytext; return VOID;}
"package"                                           {yylval.str=yytext; return PACKAGE;}
"import"                                            {yylval.str=yytext; return IMPORT;}
"class"                                             {yylval.str=yytext; return CLASS;}
"extends"                                           {yylval.str=yytext; return EXTENDS;}
"implements"                                        {yylval.str=yytext; return IMPLEMENTS;}
"throws"                                            {yylval.str=yytext; return THROWS;}
"this"                                              {yylval.str=yytext; return THIS;}
"super"                                             {yylval.str=yytext; return SUPER;}
"interface"                                         {yylval.str=yytext; return INTERFACE;}
"public"                                            {yylval.str=yytext; return PUBLIC;}
"protected"                                         {yylval.str=yytext; return PROTECTED;}
"private"                                           {yylval.str=yytext; return PRIVATE;}
"static"                                            {yylval.str=yytext; return STATIC;}
"abstract"                                          {yylval.str=yytext; return ABSTRACT;}
"final"                                             {yylval.str=yytext; return FINAL;}
"native"                                            {yylval.str=yytext; return NATIVE;}
"synchronized"                                      {yylval.str=yytext; return SYNCHRONIZED;}
"transient"                                         {yylval.str=yytext; return TRANSIENT;}
"volatile"                                          {yylval.str=yytext; return VOLATILE;}
"if"                                                {yylval.str=yytext; return IF;}
"else"                                              {yylval.str=yytext; return ELSE;}
"switch"                                            {yylval.str=yytext; return SWITCH;}
"case"                                              {yylval.str=yytext; return CASE;}
"default"                                           {yylval.str=yytext; return DEFAULT;}
"while"                                             {yylval.str=yytext; return WHILE;}
"do"                                                {yylval.str=yytext; return DO;}
"for"                                               {yylval.str=yytext; return FOR;}
"break"                                             {yylval.str=yytext; return BREAK;}
"return"                                            {yylval.str=yytext; return RETURN;}
"continue"                                          {yylval.str=yytext; return CONTINUE;}
"throw"                                             {yylval.str=yytext; return THROW;}
"try"                                               {yylval.str=yytext; return TRY;}
"catch"                                             {yylval.str=yytext; return CATCH;}
"finally"                                           {yylval.str=yytext; return FINALLY;}
"new"                                               {yylval.str=yytext; return NEW;}
"instanceof"                                        {yylval.str=yytext; return INSTANCEOF;}
{Identifier}                                        {yylval.str=yytext; return IDENTIFIER;}
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
"<<"                                                {yylval.str=yytext; return LSHIFT;}
">>"                                                {yylval.str=yytext; return RSHIFT;}
">>>"                                                {yylval.str=yytext; return LOGICAL_RSHIFT;}
"<="                                                {yylval.str=yytext; return LTEQ;}
">="                                                {yylval.str=yytext; return GTEQ;}
"=="                                                {yylval.str=yytext; return EQ;}
"!="                                                {yylval.str=yytext; return NE;}
"&&"                                                {yylval.str=yytext; return AND;}
"||"                                                {yylval.str=yytext; return OR;}
"*="                                                {yylval.str=yytext; return MULT_ASSIGN;}
"/="                                                {yylval.str=yytext; return DIV_ASSIGN;}
"%="                                                {yylval.str=yytext; return MOD_ASSIGN;}
"+="                                                {yylval.str=yytext; return ADD_ASSIGN;}
"-="                                                {yylval.str=yytext; return SUB_ASSIGN;}
"&="                                                {yylval.str=yytext; return BIT_AND_ASSIGN;}
"^="                                                {yylval.str=yytext; return EXPO_ASSIGN;}
"|="                                                {yylval.str=yytext; return BIT_OR_ASSIGN;}
"<<="                                               {yylval.str=yytext; return LSHIFT_ASSIGN;} 
">>="                                               {yylval.str=yytext; return RSHIFT_ASSIGN;} 
">>>="                                              {yylval.str=yytext; return LOGICAL_RSHIFT_ASSIGN;}
"++"                                                {yylval.str=yytext; return INC;}
"--"                                                {yylval.str=yytext; return DEC;}
<<EOF>>                                             yyterminate();
.                                                   {fprintf(stderr, "Invalid Token at line %d: %s\n", line_num, yytext); exit(1);}
%%

// int yywrap() {
//     if (feof(yyin))
//         return 1;
//     else
//         return 0;
// }
