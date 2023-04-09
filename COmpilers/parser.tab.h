/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGERLITERAL = 258,          /* INTEGERLITERAL  */
    FLOATINGPOINTLITERAL = 259,    /* FLOATINGPOINTLITERAL  */
    CHARACTERLITERAL = 260,        /* CHARACTERLITERAL  */
    BOOLEANLITERAL = 261,          /* BOOLEANLITERAL  */
    STRINGLITERAL = 262,           /* STRINGLITERAL  */
    NULLLITERAL = 263,             /* NULLLITERAL  */
    IDENTIFIER = 264,              /* IDENTIFIER  */
    BOOLEAN = 265,                 /* BOOLEAN  */
    BYTE = 266,                    /* BYTE  */
    SHORT = 267,                   /* SHORT  */
    INT = 268,                     /* INT  */
    LONG = 269,                    /* LONG  */
    CHAR = 270,                    /* CHAR  */
    FLOAT = 271,                   /* FLOAT  */
    DOUBLE = 272,                  /* DOUBLE  */
    VOID = 273,                    /* VOID  */
    PACKAGE = 274,                 /* PACKAGE  */
    IMPORT = 275,                  /* IMPORT  */
    CLASS = 276,                   /* CLASS  */
    EXTENDS = 277,                 /* EXTENDS  */
    IMPLEMENTS = 278,              /* IMPLEMENTS  */
    THROWS = 279,                  /* THROWS  */
    THIS = 280,                    /* THIS  */
    SUPER = 281,                   /* SUPER  */
    INTERFACE = 282,               /* INTERFACE  */
    PUBLIC = 283,                  /* PUBLIC  */
    PROTECTED = 284,               /* PROTECTED  */
    PRIVATE = 285,                 /* PRIVATE  */
    STATIC = 286,                  /* STATIC  */
    ABSTRACT = 287,                /* ABSTRACT  */
    FINAL = 288,                   /* FINAL  */
    NATIVE = 289,                  /* NATIVE  */
    SYNCHRONIZED = 290,            /* SYNCHRONIZED  */
    TRANSIENT = 291,               /* TRANSIENT  */
    VOLATILE = 292,                /* VOLATILE  */
    IF = 293,                      /* IF  */
    ELSE = 294,                    /* ELSE  */
    SWITCH = 295,                  /* SWITCH  */
    CASE = 296,                    /* CASE  */
    DEFAULT = 297,                 /* DEFAULT  */
    WHILE = 298,                   /* WHILE  */
    DO = 299,                      /* DO  */
    FOR = 300,                     /* FOR  */
    BREAK = 301,                   /* BREAK  */
    RETURN = 302,                  /* RETURN  */
    CONTINUE = 303,                /* CONTINUE  */
    THROW = 304,                   /* THROW  */
    TRY = 305,                     /* TRY  */
    CATCH = 306,                   /* CATCH  */
    FINALLY = 307,                 /* FINALLY  */
    NEW = 308,                     /* NEW  */
    INSTANCEOF = 309,              /* INSTANCEOF  */
    LSHIFT = 310,                  /* LSHIFT  */
    RSHIFT = 311,                  /* RSHIFT  */
    LOGICAL_RSHIFT = 312,          /* LOGICAL_RSHIFT  */
    LTEQ = 313,                    /* LTEQ  */
    GTEQ = 314,                    /* GTEQ  */
    EQ = 315,                      /* EQ  */
    NE = 316,                      /* NE  */
    AND = 317,                     /* AND  */
    OR = 318,                      /* OR  */
    MULT_ASSIGN = 319,             /* MULT_ASSIGN  */
    DIV_ASSIGN = 320,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 321,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 322,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 323,              /* SUB_ASSIGN  */
    BIT_AND_ASSIGN = 324,          /* BIT_AND_ASSIGN  */
    EXPO_ASSIGN = 325,             /* EXPO_ASSIGN  */
    BIT_OR_ASSIGN = 326,           /* BIT_OR_ASSIGN  */
    INC = 327,                     /* INC  */
    DEC = 328,                     /* DEC  */
    LSHIFT_ASSIGN = 329,           /* LSHIFT_ASSIGN  */
    RSHIFT_ASSIGN = 330,           /* RSHIFT_ASSIGN  */
    LOGICAL_RSHIFT_ASSIGN = 331    /* LOGICAL_RSHIFT_ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "parser.y"

  struct ast_node * node;


#line 145 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
