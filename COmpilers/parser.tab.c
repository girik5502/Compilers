/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include "3ac.cpp"

using namespace std;

// Declare functions used in the parser and lexer
extern int yylex();
extern int line_num;
void yyerror(string msg);
extern FILE* yyin;



char c[5];

#line 91 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGERLITERAL = 3,             /* INTEGERLITERAL  */
  YYSYMBOL_FLOATINGPOINTLITERAL = 4,       /* FLOATINGPOINTLITERAL  */
  YYSYMBOL_CHARACTERLITERAL = 5,           /* CHARACTERLITERAL  */
  YYSYMBOL_BOOLEANLITERAL = 6,             /* BOOLEANLITERAL  */
  YYSYMBOL_STRINGLITERAL = 7,              /* STRINGLITERAL  */
  YYSYMBOL_NULLLITERAL = 8,                /* NULLLITERAL  */
  YYSYMBOL_IDENTIFIER = 9,                 /* IDENTIFIER  */
  YYSYMBOL_BOOLEAN = 10,                   /* BOOLEAN  */
  YYSYMBOL_BYTE = 11,                      /* BYTE  */
  YYSYMBOL_SHORT = 12,                     /* SHORT  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_LONG = 14,                      /* LONG  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_FLOAT = 16,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 17,                    /* DOUBLE  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_PACKAGE = 19,                   /* PACKAGE  */
  YYSYMBOL_IMPORT = 20,                    /* IMPORT  */
  YYSYMBOL_CLASS = 21,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 22,                   /* EXTENDS  */
  YYSYMBOL_IMPLEMENTS = 23,                /* IMPLEMENTS  */
  YYSYMBOL_THROWS = 24,                    /* THROWS  */
  YYSYMBOL_THIS = 25,                      /* THIS  */
  YYSYMBOL_SUPER = 26,                     /* SUPER  */
  YYSYMBOL_INTERFACE = 27,                 /* INTERFACE  */
  YYSYMBOL_PUBLIC = 28,                    /* PUBLIC  */
  YYSYMBOL_PROTECTED = 29,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 30,                   /* PRIVATE  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_ABSTRACT = 32,                  /* ABSTRACT  */
  YYSYMBOL_FINAL = 33,                     /* FINAL  */
  YYSYMBOL_NATIVE = 34,                    /* NATIVE  */
  YYSYMBOL_SYNCHRONIZED = 35,              /* SYNCHRONIZED  */
  YYSYMBOL_TRANSIENT = 36,                 /* TRANSIENT  */
  YYSYMBOL_VOLATILE = 37,                  /* VOLATILE  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_SWITCH = 40,                    /* SWITCH  */
  YYSYMBOL_CASE = 41,                      /* CASE  */
  YYSYMBOL_DEFAULT = 42,                   /* DEFAULT  */
  YYSYMBOL_WHILE = 43,                     /* WHILE  */
  YYSYMBOL_DO = 44,                        /* DO  */
  YYSYMBOL_FOR = 45,                       /* FOR  */
  YYSYMBOL_BREAK = 46,                     /* BREAK  */
  YYSYMBOL_RETURN = 47,                    /* RETURN  */
  YYSYMBOL_CONTINUE = 48,                  /* CONTINUE  */
  YYSYMBOL_THROW = 49,                     /* THROW  */
  YYSYMBOL_TRY = 50,                       /* TRY  */
  YYSYMBOL_CATCH = 51,                     /* CATCH  */
  YYSYMBOL_FINALLY = 52,                   /* FINALLY  */
  YYSYMBOL_NEW = 53,                       /* NEW  */
  YYSYMBOL_INSTANCEOF = 54,                /* INSTANCEOF  */
  YYSYMBOL_55_ = 55,                       /* '='  */
  YYSYMBOL_56_ = 56,                       /* ']'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
  YYSYMBOL_59_ = 59,                       /* '{'  */
  YYSYMBOL_60_ = 60,                       /* ','  */
  YYSYMBOL_61_ = 61,                       /* ';'  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '('  */
  YYSYMBOL_64_ = 64,                       /* '.'  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* '+'  */
  YYSYMBOL_67_ = 67,                       /* '-'  */
  YYSYMBOL_68_ = 68,                       /* '~'  */
  YYSYMBOL_69_ = 69,                       /* '!'  */
  YYSYMBOL_70_ = 70,                       /* '*'  */
  YYSYMBOL_71_ = 71,                       /* '/'  */
  YYSYMBOL_72_ = 72,                       /* '%'  */
  YYSYMBOL_73_ = 73,                       /* '<'  */
  YYSYMBOL_74_ = 74,                       /* '>'  */
  YYSYMBOL_75_ = 75,                       /* '&'  */
  YYSYMBOL_76_ = 76,                       /* '^'  */
  YYSYMBOL_77_ = 77,                       /* '|'  */
  YYSYMBOL_78_ = 78,                       /* '?'  */
  YYSYMBOL_LSHIFT = 79,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 80,                    /* RSHIFT  */
  YYSYMBOL_LOGICAL_RSHIFT = 81,            /* LOGICAL_RSHIFT  */
  YYSYMBOL_LTEQ = 82,                      /* LTEQ  */
  YYSYMBOL_GTEQ = 83,                      /* GTEQ  */
  YYSYMBOL_EQ = 84,                        /* EQ  */
  YYSYMBOL_NE = 85,                        /* NE  */
  YYSYMBOL_AND = 86,                       /* AND  */
  YYSYMBOL_OR = 87,                        /* OR  */
  YYSYMBOL_MULT_ASSIGN = 88,               /* MULT_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 89,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 90,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 91,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 92,                /* SUB_ASSIGN  */
  YYSYMBOL_BIT_AND_ASSIGN = 93,            /* BIT_AND_ASSIGN  */
  YYSYMBOL_EXPO_ASSIGN = 94,               /* EXPO_ASSIGN  */
  YYSYMBOL_BIT_OR_ASSIGN = 95,             /* BIT_OR_ASSIGN  */
  YYSYMBOL_INC = 96,                       /* INC  */
  YYSYMBOL_DEC = 97,                       /* DEC  */
  YYSYMBOL_LSHIFT_ASSIGN = 98,             /* LSHIFT_ASSIGN  */
  YYSYMBOL_RSHIFT_ASSIGN = 99,             /* RSHIFT_ASSIGN  */
  YYSYMBOL_LOGICAL_RSHIFT_ASSIGN = 100,    /* LOGICAL_RSHIFT_ASSIGN  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_Literal = 102,                  /* Literal  */
  YYSYMBOL_Type = 103,                     /* Type  */
  YYSYMBOL_PrimitiveType = 104,            /* PrimitiveType  */
  YYSYMBOL_NumericType = 105,              /* NumericType  */
  YYSYMBOL_IntegralType = 106,             /* IntegralType  */
  YYSYMBOL_FloatingPointType = 107,        /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 108,            /* ReferenceType  */
  YYSYMBOL_ClassOrInterfaceType = 109,     /* ClassOrInterfaceType  */
  YYSYMBOL_ClassType = 110,                /* ClassType  */
  YYSYMBOL_InterfaceType = 111,            /* InterfaceType  */
  YYSYMBOL_ArrayType = 112,                /* ArrayType  */
  YYSYMBOL_Name = 113,                     /* Name  */
  YYSYMBOL_SimpleName = 114,               /* SimpleName  */
  YYSYMBOL_QualifiedName = 115,            /* QualifiedName  */
  YYSYMBOL_CompilationUnit = 116,          /* CompilationUnit  */
  YYSYMBOL_ImportDeclarations = 117,       /* ImportDeclarations  */
  YYSYMBOL_TypeDeclarations = 118,         /* TypeDeclarations  */
  YYSYMBOL_PackageDeclaration = 119,       /* PackageDeclaration  */
  YYSYMBOL_ImportDeclaration = 120,        /* ImportDeclaration  */
  YYSYMBOL_SingleTypeImportDeclaration = 121, /* SingleTypeImportDeclaration  */
  YYSYMBOL_TypeImportOnDemandDeclaration = 122, /* TypeImportOnDemandDeclaration  */
  YYSYMBOL_TypeDeclaration = 123,          /* TypeDeclaration  */
  YYSYMBOL_Modifiers = 124,                /* Modifiers  */
  YYSYMBOL_Modifier = 125,                 /* Modifier  */
  YYSYMBOL_ClassDeclaration = 126,         /* ClassDeclaration  */
  YYSYMBOL_Super = 127,                    /* Super  */
  YYSYMBOL_Interfaces = 128,               /* Interfaces  */
  YYSYMBOL_InterfaceTypeList = 129,        /* InterfaceTypeList  */
  YYSYMBOL_ClassBody = 130,                /* ClassBody  */
  YYSYMBOL_ClassBodyDeclarations = 131,    /* ClassBodyDeclarations  */
  YYSYMBOL_ClassBodyDeclaration = 132,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 133,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 134,         /* FieldDeclaration  */
  YYSYMBOL_VariableDeclarators = 135,      /* VariableDeclarators  */
  YYSYMBOL_VariableDeclarator = 136,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 137,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 138,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 139,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 140,             /* MethodHeader  */
  YYSYMBOL_MethodDeclarator = 141,         /* MethodDeclarator  */
  YYSYMBOL_FormalParameterList = 142,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter = 143,          /* FormalParameter  */
  YYSYMBOL_Throws = 144,                   /* Throws  */
  YYSYMBOL_ClassTypeList = 145,            /* ClassTypeList  */
  YYSYMBOL_MethodBody = 146,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 147,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 148,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 149,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 150,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation = 151, /* ExplicitConstructorInvocation  */
  YYSYMBOL_InterfaceDeclaration = 152,     /* InterfaceDeclaration  */
  YYSYMBOL_ExtendsInterfaces = 153,        /* ExtendsInterfaces  */
  YYSYMBOL_InterfaceBody = 154,            /* InterfaceBody  */
  YYSYMBOL_InterfaceMemberDeclarations = 155, /* InterfaceMemberDeclarations  */
  YYSYMBOL_InterfaceMemberDeclaration = 156, /* InterfaceMemberDeclaration  */
  YYSYMBOL_ConstantDeclaration = 157,      /* ConstantDeclaration  */
  YYSYMBOL_AbstractMethodDeclaration = 158, /* AbstractMethodDeclaration  */
  YYSYMBOL_ArrayInitializer = 159,         /* ArrayInitializer  */
  YYSYMBOL_VariableInitializers = 160,     /* VariableInitializers  */
  YYSYMBOL_Block = 161,                    /* Block  */
  YYSYMBOL_BlockStatements = 162,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 163,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 164, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 165, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 166,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 167,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 168, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 169,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 170,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 171, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 172,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 173,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 174,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 175,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 176, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_SwitchStatement = 177,          /* SwitchStatement  */
  YYSYMBOL_SwitchBlock = 178,              /* SwitchBlock  */
  YYSYMBOL_SwitchBlockStatementGroups = 179, /* SwitchBlockStatementGroups  */
  YYSYMBOL_SwitchBlockStatementGroup = 180, /* SwitchBlockStatementGroup  */
  YYSYMBOL_SwitchLabels = 181,             /* SwitchLabels  */
  YYSYMBOL_SwitchLabel = 182,              /* SwitchLabel  */
  YYSYMBOL_WhileStatement = 183,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 184,  /* WhileStatementNoShortIf  */
  YYSYMBOL_DoStatement = 185,              /* DoStatement  */
  YYSYMBOL_ForStatement = 186,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 187,    /* ForStatementNoShortIf  */
  YYSYMBOL_ForInit = 188,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 189,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 190,  /* StatementExpressionList  */
  YYSYMBOL_BreakStatement = 191,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 192,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 193,          /* ReturnStatement  */
  YYSYMBOL_ThrowStatement = 194,           /* ThrowStatement  */
  YYSYMBOL_SynchronizedStatement = 195,    /* SynchronizedStatement  */
  YYSYMBOL_TryStatement = 196,             /* TryStatement  */
  YYSYMBOL_Catches = 197,                  /* Catches  */
  YYSYMBOL_CatchClause = 198,              /* CatchClause  */
  YYSYMBOL_Finally = 199,                  /* Finally  */
  YYSYMBOL_Primary = 200,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 201,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassInstanceCreationExpression = 202, /* ClassInstanceCreationExpression  */
  YYSYMBOL_ArgumentList = 203,             /* ArgumentList  */
  YYSYMBOL_ArrayCreationExpression = 204,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 205,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 206,                  /* DimExpr  */
  YYSYMBOL_Dims = 207,                     /* Dims  */
  YYSYMBOL_FieldAccess = 208,              /* FieldAccess  */
  YYSYMBOL_MethodInvocation = 209,         /* MethodInvocation  */
  YYSYMBOL_ArrayAccess = 210,              /* ArrayAccess  */
  YYSYMBOL_PostfixExpression = 211,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 212,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 213,  /* PostDecrementExpression  */
  YYSYMBOL_UnaryExpression = 214,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 215,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 216,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 217, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_CastExpression = 218,           /* CastExpression  */
  YYSYMBOL_MultiplicativeExpression = 219, /* MultiplicativeExpression  */
  YYSYMBOL_AdditiveExpression = 220,       /* AdditiveExpression  */
  YYSYMBOL_ShiftExpression = 221,          /* ShiftExpression  */
  YYSYMBOL_RelationalExpression = 222,     /* RelationalExpression  */
  YYSYMBOL_EqualityExpression = 223,       /* EqualityExpression  */
  YYSYMBOL_AndExpression = 224,            /* AndExpression  */
  YYSYMBOL_ExclusiveOrExpression = 225,    /* ExclusiveOrExpression  */
  YYSYMBOL_InclusiveOrExpression = 226,    /* InclusiveOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 227, /* ConditionalAndExpression  */
  YYSYMBOL_ConditionalOrExpression = 228,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalExpression = 229,    /* ConditionalExpression  */
  YYSYMBOL_AssignmentExpression = 230,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 231,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 232,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 233,       /* AssignmentOperator  */
  YYSYMBOL_Expression = 234,               /* Expression  */
  YYSYMBOL_ConstantExpression = 235        /* ConstantExpression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  135
/* YYNRULES -- Number of rules.  */
#define YYNRULES  350
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  621

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    72,    75,     2,
      63,    62,    70,    66,    60,    67,    64,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    61,
      73,    55,    74,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    56,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,    77,    57,    68,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   175,   175,   177,   179,   181,   183,   185,   190,   192,
     196,   198,   202,   204,   208,   210,   212,   214,   216,   220,
     222,   226,   228,   232,   236,   240,   244,   246,   248,   252,
     254,   258,   262,   266,   268,   270,   272,   274,   276,   278,
     280,   284,   286,   290,   292,   296,   300,   302,   306,   310,
     314,   316,   318,   322,   324,   328,   330,   332,   334,   336,
     338,   340,   342,   344,   346,   350,   352,   354,   356,   358,
     360,   362,   364,   368,   372,   376,   378,   382,   384,   388,
     390,   394,   396,   398,   402,   404,   408,   410,   414,   416,
     420,   422,   426,   428,   432,   434,   438,   442,   444,   446,
     448,   450,   452,   454,   456,   460,   462,   464,   468,   470,
     474,   478,   482,   484,   488,   490,   494,   498,   500,   502,
     504,   508,   510,   514,   516,   518,   520,   524,   526,   528,
     530,   534,   536,   538,   540,   544,   546,   550,   552,   556,
     558,   562,   564,   568,   572,   576,   578,   580,   582,   586,
     588,   592,   594,   598,   600,   604,   606,   610,   614,   618,
     620,   622,   624,   626,   628,   632,   634,   636,   638,   640,
     644,   646,   648,   650,   652,   654,   656,   658,   660,   662,
     664,   668,   672,   676,   680,   684,   686,   688,   690,   692,
     694,   696,   700,   704,   708,   712,   716,   718,   720,   722,
     726,   728,   732,   736,   738,   742,   744,   748,   752,   756,
     760,   762,   764,   766,   768,   770,   772,   774,   778,   780,
     782,   784,   786,   788,   790,   792,   796,   798,   802,   806,
     808,   812,   814,   818,   820,   824,   826,   830,   834,   838,
     840,   842,   846,   848,   852,   856,   860,   862,   867,   869,
     871,   873,   875,   877,   879,   883,   885,   889,   889,   893,
     895,   897,   899,   903,   905,   909,   913,   915,   919,   921,
     924,   926,   928,   930,   932,   934,   938,   940,   944,   946,
     948,   950,   954,   958,   962,   964,   966,   968,   970,   974,
     978,   982,   984,   986,   988,   992,   994,   996,   998,  1002,
    1004,  1006,  1008,  1012,  1014,  1016,  1020,  1022,  1024,  1026,
    1030,  1032,  1034,  1036,  1038,  1040,  1044,  1046,  1048,  1052,
    1054,  1058,  1059,  1063,  1065,  1068,  1070,  1074,  1076,  1080,
    1082,  1086,  1088,  1092,  1102,  1104,  1106,  1110,  1112,  1114,
    1116,  1118,  1120,  1122,  1124,  1126,  1128,  1130,  1132,  1136,
    1140
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGERLITERAL",
  "FLOATINGPOINTLITERAL", "CHARACTERLITERAL", "BOOLEANLITERAL",
  "STRINGLITERAL", "NULLLITERAL", "IDENTIFIER", "BOOLEAN", "BYTE", "SHORT",
  "INT", "LONG", "CHAR", "FLOAT", "DOUBLE", "VOID", "PACKAGE", "IMPORT",
  "CLASS", "EXTENDS", "IMPLEMENTS", "THROWS", "THIS", "SUPER", "INTERFACE",
  "PUBLIC", "PROTECTED", "PRIVATE", "STATIC", "ABSTRACT", "FINAL",
  "NATIVE", "SYNCHRONIZED", "TRANSIENT", "VOLATILE", "IF", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "WHILE", "DO", "FOR", "BREAK", "RETURN",
  "CONTINUE", "THROW", "TRY", "CATCH", "FINALLY", "NEW", "INSTANCEOF",
  "'='", "']'", "'}'", "':'", "'{'", "','", "';'", "')'", "'('", "'.'",
  "'['", "'+'", "'-'", "'~'", "'!'", "'*'", "'/'", "'%'", "'<'", "'>'",
  "'&'", "'^'", "'|'", "'?'", "LSHIFT", "RSHIFT", "LOGICAL_RSHIFT", "LTEQ",
  "GTEQ", "EQ", "NE", "AND", "OR", "MULT_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "BIT_AND_ASSIGN",
  "EXPO_ASSIGN", "BIT_OR_ASSIGN", "INC", "DEC", "LSHIFT_ASSIGN",
  "RSHIFT_ASSIGN", "LOGICAL_RSHIFT_ASSIGN", "$accept", "Literal", "Type",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "ReferenceType", "ClassOrInterfaceType", "ClassType", "InterfaceType",
  "ArrayType", "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "ImportDeclarations", "TypeDeclarations", "PackageDeclaration",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration", "Modifiers",
  "Modifier", "ClassDeclaration", "Super", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableDeclaratorId",
  "VariableInitializer", "MethodDeclaration", "MethodHeader",
  "MethodDeclarator", "FormalParameterList", "FormalParameter", "Throws",
  "ClassTypeList", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "InterfaceDeclaration",
  "ExtendsInterfaces", "InterfaceBody", "InterfaceMemberDeclarations",
  "InterfaceMemberDeclaration", "ConstantDeclaration",
  "AbstractMethodDeclaration", "ArrayInitializer", "VariableInitializers",
  "Block", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "SwitchStatement", "SwitchBlock",
  "SwitchBlockStatementGroups", "SwitchBlockStatementGroup",
  "SwitchLabels", "SwitchLabel", "WhileStatement",
  "WhileStatementNoShortIf", "DoStatement", "ForStatement",
  "ForStatementNoShortIf", "ForInit", "ForUpdate",
  "StatementExpressionList", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "SynchronizedStatement",
  "TryStatement", "Catches", "CatchClause", "Finally", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression", "ArgumentList",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Dims", "FieldAccess",
  "MethodInvocation", "ArrayAccess", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", "ConstantExpression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-427)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-337)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1159,    61,    61,    73,   106,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,    76,  2652,  1469,  2652,
    -427,  -427,  -427,  -427,  1197,  -427,  -427,  -427,  -427,    -5,
    -427,  -427,    67,   136,    84,  -427,  1469,  -427,  -427,  2652,
    1469,   114,   147,  -427,  -427,   153,  -427,    17,    61,    61,
    3147,   137,    79,  -427,    61,  3177,     6,  -427,  1469,   136,
      84,  -427,   115,  -427,  -427,   133,  -427,  -427,   144,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,   218,   182,  -427,
     273,   180,  -427,  -427,  -427,  -427,  -427,   245,   199,   239,
    3267,  3207,  -427,  -427,  -427,  -427,    -9,  -427,  -427,   120,
      79,  -427,  -427,  -427,  -427,  3267,  -427,   258,  3237,  -427,
    -427,  -427,    61,  -427,   137,    79,  -427,     6,  -427,  -427,
      61,   287,    21,  1953,  -427,   287,   215,  -427,     3,    21,
     312,   336,   344,   274,   218,   273,   120,  -427,  -427,  -427,
    -427,  -427,    61,  2016,   345,  -427,  -427,  -427,  -427,  -427,
    -427,    79,  -427,  -427,  -427,  -427,   436,   347,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,   349,  -427,   346,   348,   350,
     351,   353,   708,   355,    27,  2472,    35,  2873,   182,   975,
    -427,  -427,  2873,  2873,  2873,  -427,   399,    53,  -427,  2079,
    -427,  -427,   358,  -427,  -427,  -427,  -427,  -427,   359,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,   357,   360,   238,  -427,   852,   244,  1607,   154,   236,
     241,  -427,  -427,  -427,  2428,   399,  -427,  2504,   356,  -427,
    -427,  -427,  -427,  -427,   399,   129,  -427,    21,   269,    21,
     345,  -427,  -427,   362,   361,   283,  -427,  2142,  2205,  -427,
    -427,  -427,   150,  -427,   708,   400,  2873,  2873,  2873,  2873,
     632,   385,  1060,   368,  -427,  -427,  1616,  2873,  2873,  2873,
    2873,  -427,  -427,   154,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,   237,   292,   263,   161,   280,   364,   354,   366,   369,
     162,  -427,  -427,  -427,   370,   371,  -427,   373,   315,   389,
     389,   372,   394,   289,  -427,  -427,  -427,  -427,  -427,   397,
    2540,  2572,  -427,  -427,  -427,  -427,   449,  2873,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  2873,  -427,  2405,  -427,  -427,  -427,  -427,   398,
     975,  -427,  -427,  -427,  -427,  -427,    61,  2608,  2640,  -427,
    2268,  -427,  -427,  -427,   396,   403,   404,   406,   409,  2873,
     413,  2691,  -427,  -427,   411,   417,  -427,   125,  2496,   419,
    -427,  -427,  -427,  -427,  2873,  2873,  2873,  2873,  2873,  2873,
    2873,  2873,   975,  2873,  2873,  2873,  2873,  2873,  2873,  2873,
    2873,  2873,  2873,  2873,  2873,  -427,  -427,  -427,   416,   182,
     315,  -427,  -427,  2873,   425,  -427,   425,  2715,  -427,  -427,
     177,  -427,   428,   430,   435,  -427,  -427,   439,  -427,   169,
    -427,  -427,   440,   198,   441,   219,  -427,  2723,   182,  2394,
     445,   708,  2873,   309,   446,  2790,   160,  2873,   444,   190,
    2799,   197,  1317,  -427,  -427,  -427,   237,   237,   292,   292,
     292,   180,  -427,   263,   263,   263,   263,   161,   161,   280,
     364,   354,   366,   450,   369,   975,  -427,  -427,  -427,   453,
    2799,  -427,   447,   447,  -427,   233,  2873,  -427,  -427,  2866,
    -427,  -427,  -427,   539,  -427,   452,  -427,   454,  -427,   260,
    -427,   459,   458,   460,   461,  -427,   471,   483,  -427,  -427,
    -427,  -427,   159,  -427,  -427,   463,   708,   465,   417,  1287,
    1515,   467,  -427,  -427,  -427,  2873,   473,  1317,  -427,  2873,
     468,  -427,  -427,  -427,  -427,   264,  -427,  -427,  -427,  -427,
    -427,  2394,  2873,  2873,  1385,   708,  2873,   474,  -427,   191,
    -427,  1813,  -427,   470,  -427,   708,   708,   475,   708,   476,
    2973,  -427,  -427,  -427,  -427,   182,  -427,  -427,   477,   479,
    2898,   488,  -427,  -427,   478,  -427,  -427,  -427,  1890,  -427,
    2331,  -427,  -427,  -427,  -427,   708,  -427,   708,   708,   489,
    -427,  2394,  2394,  2980,   492,  2949,  -427,  -427,  -427,  -427,
    -427,   708,   496,  -427,  2394,   494,  3046,  3053,   493,  -427,
    2394,  -427,  2394,  2394,   495,  2394,   498,  3077,  -427,  -427,
    -427,  2394,  -427,  2394,  2394,   499,  -427,  -427,  -427,  2394,
    -427
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      40,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    52,     0,    38,    39,    37,
      41,    46,    47,    43,     0,    53,    50,    51,    31,     0,
      29,    30,     0,     0,     0,     1,    36,    42,    44,    34,
      35,     0,     0,    54,    45,     0,    48,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,   134,    33,     0,
       0,    32,     0,    24,    73,    23,    25,    75,    74,    11,
      14,    15,    16,    17,    18,    19,    20,     0,    58,    78,
       0,     8,    10,    12,    13,     9,    21,    22,    23,    29,
       0,     0,    79,    81,    84,    85,     0,    82,    83,     0,
       0,    70,    71,   135,   138,     0,   143,     0,     0,   139,
     141,   142,     0,   133,     0,     0,    69,     0,   132,    49,
       0,     0,   104,     0,   116,    92,     0,    88,    90,   100,
       0,     0,     0,     0,     0,     0,     0,    77,    80,   115,
      96,   114,     0,     0,     0,   120,    68,   144,   137,   140,
     136,     0,    66,    67,   131,    76,     0,     0,   103,     2,
       3,     5,     4,     6,     7,    31,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   181,     0,     0,     0,   248,     0,   334,   170,     0,
     153,   155,     0,   156,   159,   171,   160,   172,     0,   161,
     162,   173,   163,   174,   164,   175,   176,   177,   179,   178,
     180,   278,   246,   251,   247,   252,   253,   254,     0,   188,
     189,   186,   187,   185,     0,     0,    87,     0,     0,    99,
      26,    28,    27,   122,     0,     0,   108,   102,     0,    98,
       0,   118,   112,   111,   249,     0,   126,     0,     0,   119,
      65,   106,     0,   107,     0,     0,     0,     0,     0,     0,
     279,     0,     0,     0,   232,   236,     0,     0,     0,     0,
       0,   251,   253,   291,   280,   281,   299,   284,   285,   288,
     294,   303,   306,   310,   316,   319,   321,   323,   325,   327,
     329,   331,   349,   332,     0,     0,   234,     0,     0,     0,
      24,     0,     0,   279,   252,   254,   289,   290,    92,   158,
       0,     0,   151,   154,   157,   184,     0,     0,   282,   283,
     337,   338,   339,   340,   341,   342,   346,   347,   348,   343,
     344,   345,     0,    89,     0,    91,    95,    94,    93,   110,
       0,   121,   101,    86,    97,   117,     0,     0,     0,   124,
       0,   125,   105,   182,   269,     0,     0,     0,     0,     0,
       0,     0,   227,   229,     0,   226,   231,     0,   279,     0,
     286,   287,   292,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   235,   233,   237,     0,     0,
     239,   242,   241,     0,   260,   263,   262,     0,   250,   271,
       0,   257,     0,   268,     0,   333,   148,     0,   149,     0,
     109,   113,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   300,   301,   302,   304,   305,   307,   308,
     309,     0,   315,   311,   312,   313,   314,   317,   318,   320,
     322,   324,   326,     0,   328,     0,   245,   243,   240,     0,
       0,   264,   259,   261,   256,     0,     0,   270,   276,     0,
     277,   147,   146,     0,   128,     0,   130,     0,   275,     0,
     238,    31,     0,     0,     0,   192,     0,   159,   166,   167,
     168,   169,     0,   195,   207,     0,     0,     0,   228,     0,
       0,     0,   230,   296,   266,     0,     0,     0,   297,     0,
       0,   265,   255,   258,   273,     0,   145,   150,   127,   129,
     274,     0,     0,     0,     0,     0,     0,     0,   199,     0,
     200,     0,   203,     0,   217,     0,     0,     0,     0,     0,
       0,   295,   267,   298,   330,     0,   272,   183,     0,     0,
       0,     0,   193,   350,     0,   206,   197,   201,     0,   198,
     202,   204,   209,   216,   215,     0,   214,     0,     0,     0,
     244,     0,     0,     0,     0,     0,   205,   196,   213,   212,
     211,     0,     0,   208,     0,     0,     0,     0,     0,   210,
       0,   225,     0,     0,     0,     0,     0,     0,   194,   224,
     223,     0,   222,     0,     0,     0,   221,   220,   219,     0,
     218
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -427,  -427,   -48,  -168,  -427,  -427,  -427,   168,   -45,  -128,
       1,  -427,    -1,   103,  -427,  -427,   543,   186,  -427,    97,
    -427,  -427,   166,   -17,    15,  -427,   504,    12,  -427,   -22,
    -427,   480,  -427,   -31,   -74,   341,   334,  -322,  -427,   -28,
     -40,   414,  -318,  -104,  -427,  -427,  -427,  -427,   484,  -113,
    -427,  -427,   513,    13,  -427,   469,  -427,  -427,  -427,  -427,
     -68,  -102,  -176,  -427,  -257,   754,   299,  -383,  -427,  -427,
    -427,  -427,  -256,  -427,  -427,  -427,  -427,  -427,  -427,    36,
      37,  -416,  -427,  -427,  -427,  -427,  -427,    44,  -426,  -254,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,   179,   181,  -427,
    -427,  -108,  -328,  -427,   282,   -43,  -231,  1367,    49,  1403,
     272,   429,   547,  -167,   667,   872,  -408,  -427,    -8,   -24,
    -112,     9,   196,   201,   195,   208,   193,  -427,    69,   257,
    1178,  -427,  -427,  1332,  -427
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   185,   186,    81,    82,    83,    84,    85,    86,    64,
      67,    87,   260,    30,    31,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    51,    52,    68,    53,
      91,    92,    93,    94,   126,   127,   128,   335,    95,    96,
     122,   235,   236,   144,   243,   140,    97,    98,    99,   145,
     247,    27,    56,    57,   108,   109,   110,   111,   336,   419,
     188,   570,   190,   191,   192,   193,   496,   194,   195,   196,
     498,   197,   198,   199,   200,   499,   201,   503,   539,   540,
     541,   542,   202,   500,   203,   204,   501,   364,   507,   508,
     205,   206,   207,   208,   209,   210,   400,   401,   402,   211,
     212,   271,   410,   214,   404,   405,   439,   215,   272,   217,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     223,   224,   332,   411,   564
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    32,    80,    63,    66,   362,   363,    80,   365,    66,
     124,   299,   418,   313,   242,   213,   306,   307,   158,   423,
     425,   189,   420,   241,   106,   229,    61,   107,   141,   101,
     102,   249,   240,    90,   518,   213,   263,   116,   105,    43,
     129,   248,   135,    80,   295,   142,   497,    65,    65,    88,
     123,   301,   139,    65,    88,   103,    44,   135,   227,    45,
      80,   238,   -23,   100,   213,    55,   112,    66,   228,   113,
      28,   115,   313,   118,    90,    66,    35,   106,   146,   475,
     107,   213,    33,   547,   549,   234,   157,    62,   264,    88,
      88,   105,   152,   153,   237,   239,   296,    63,   367,   489,
     370,   371,   372,   373,    88,    43,    54,    88,   234,   553,
     298,    65,   309,   150,    37,    34,   310,    45,   311,    65,
      43,   155,   187,    59,   579,   571,   151,   345,    46,   250,
     154,    47,    88,   342,   300,   344,    37,   441,    50,   213,
     213,    65,   187,    55,   142,   350,   213,   520,   497,  -279,
    -279,   525,   571,    89,   213,    88,    60,   595,    48,    49,
      49,   527,    61,   159,   160,   161,   162,   163,   164,    28,
     604,   606,   216,   472,   313,   473,   119,   363,    65,   143,
     512,   615,   303,   303,    38,   166,   167,   437,   187,   340,
     438,   341,   216,    89,    89,    50,    50,    45,   497,   497,
     536,   537,    38,    36,   120,    40,    38,   443,   444,   445,
     340,   497,   352,   179,   451,   382,   538,   497,   421,   497,
     497,   216,   497,   182,    38,    58,   482,   121,   497,   483,
     497,   497,   536,   537,   383,   384,   497,   476,   216,   477,
     393,   123,   213,   385,   386,   130,   187,   187,   566,   394,
     318,   319,   515,   363,   363,   516,   183,   184,   476,   517,
     485,   187,   516,    45,   132,   368,   303,   303,   303,   303,
     513,   453,   454,   455,   456,   225,   226,   362,   363,   476,
     365,   487,   125,    28,    69,    70,    71,    72,    73,    74,
      75,    76,   234,   476,   363,   522,   216,   216,  -191,  -191,
    -191,    63,   133,   216,  -190,  -190,  -190,   374,   375,   376,
     131,   216,   159,   160,   161,   162,   163,   164,    28,   147,
     476,   213,   530,   213,   476,   213,   556,   363,   213,   225,
     343,   466,  -280,  -280,   166,   167,   233,  -281,  -281,    88,
     363,   363,   379,   380,   381,    65,   348,   255,   551,   187,
     156,   363,   310,    45,   359,   448,   449,   450,   377,   378,
     490,   471,   179,   471,   387,   388,   398,   399,   230,   446,
     447,   506,   182,   303,   303,   303,   303,   303,   303,   303,
     303,    88,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   231,   303,   313,   218,   457,   458,   213,   216,
     232,   213,   213,   253,   143,   183,   184,   254,   308,   354,
     255,   256,   338,   257,   258,   218,   259,   234,   262,   314,
     315,   316,   346,   213,   347,   317,   213,   213,   360,   366,
     390,   395,   396,   213,   397,   407,   303,   213,   213,   389,
     213,   303,   213,   391,   218,    28,    69,    70,    71,    72,
      73,    74,    75,    76,   403,   392,   408,   225,   413,   427,
     213,   218,   213,   228,    88,   428,   429,   213,   430,   213,
     213,   431,   435,   213,   213,   213,   432,   436,   216,   465,
     216,   442,   216,   213,   478,   216,   213,   580,   213,   213,
     470,   480,   213,   479,   213,   213,   481,   213,   251,   213,
     514,   484,   486,   213,   502,   213,   213,   509,   519,   521,
     535,   213,   516,   528,   303,   529,   303,   531,   303,   218,
     218,   532,  -165,   533,   534,   543,   218,   545,   550,   552,
     555,   572,   565,   187,   218,   600,   586,   575,   577,   581,
     187,   582,   159,   160,   161,   162,   163,   164,    28,   585,
     452,   591,   219,   596,   607,   216,   602,   611,   216,   216,
     613,   619,    39,   114,   166,   167,   333,   187,   339,   187,
     252,   138,   219,   117,   136,   567,   568,   149,   561,   467,
     216,   468,   406,   216,   216,   459,   461,   464,   554,   415,
     216,   460,   179,     0,   216,   216,   526,   216,   334,   216,
     462,   219,   266,     0,     0,   267,   268,   269,   270,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   219,   216,
       0,     0,   218,     0,   216,     0,   216,   216,     0,     0,
     216,   216,   216,     0,     0,   183,   184,     0,     0,     0,
     216,     0,     0,   216,     0,   216,   216,     0,     0,   216,
       0,   216,   216,     0,   216,     0,   216,     0,     0,     0,
     216,     0,   216,   216,     0,     0,     0,     0,   216,     0,
     220,     0,     0,     0,     0,     0,   219,   219,     0,     0,
       0,     0,     0,   219,     0,     0,     0,  -334,     0,     0,
     220,   219,     0,     0,     0,   310,    45,   359,     0,     0,
       0,   218,     0,   218,     0,   218,     0,     0,   218,     0,
       0,   159,   160,   161,   162,   163,   164,   165,     0,   220,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,     0,     0,
    -334,  -334,  -334,   166,   167,     0,   220,     0,     0,     0,
       0,     0,     0,   168,     0,     0,   169,     0,   170,     0,
       0,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,   179,     0,     0,     0,     0,     0,   123,     0,   181,
       0,   182,     0,     0,     0,     0,     0,     0,   218,   219,
       0,   218,   218,     0,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,   220,   220,     0,     0,     0,     0,
       0,   220,     0,   218,   183,   184,   218,   218,     0,   220,
     221,     0,     0,   218,     0,     0,     0,   218,   218,     0,
     218,     0,   218,     0,     0,     0,     0,     0,     0,     0,
     557,     0,     0,     0,     0,     0,     0,     0,     0,   221,
     218,     0,   218,     0,     0,     0,     0,   218,     0,   218,
     218,     0,     0,   218,   218,   218,   221,     0,   219,     0,
     219,     0,   219,   218,     0,   219,   218,     0,   218,   218,
       0,     0,   218,     0,   218,   218,     0,   218,     0,   218,
     592,   593,     0,   218,     0,   218,   218,     0,     0,     0,
       0,   218,     0,   601,     0,     0,     0,   220,     0,   608,
       0,   609,   610,     0,   612,     0,     0,  -335,     0,     0,
     616,     0,   617,   618,   221,   221,     0,     0,   620,     0,
       0,   221,     0,     0,     0,     0,   261,     0,     0,   221,
       0,     0,     0,     0,     0,   219,     0,     0,   219,   219,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,     0,     0,
    -335,  -335,  -335,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,   219,   219,     0,     0,     0,     0,     0,
     219,     0,     0,     0,   219,   219,   220,   219,   220,   219,
     220,     0,     0,   220,    28,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,   222,     0,   219,     0,   219,
       0,     0,     0,     0,   219,     0,   219,   219,   353,     0,
     219,   219,   219,     0,     0,   222,     0,   221,     0,     0,
     219,     0,     0,   219,     0,   219,   219,     0,     0,   219,
       0,   219,   219,     0,   219,     0,   219,     0,     0,     0,
     219,     0,   219,   219,   222,     0,     0,     0,   219,     0,
       0,     0,     0,   220,     0,     0,   220,   220,     0,     0,
       0,   222,     0,   159,   160,   161,   162,   163,   164,    28,
      69,    70,    71,    72,    73,    74,    75,    76,   220,     0,
       0,   220,   220,     0,     0,   166,   167,     0,   220,     0,
       0,     0,   220,   220,     0,   220,   221,   220,   221,     0,
     221,     0,     0,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,   220,     0,   220,     0,   222,
     222,   361,   220,   182,   220,   220,   222,     0,   220,   220,
     220,     0,     0,     0,   222,     0,     0,     0,   220,     0,
       0,   220,     0,   220,   220,     0,     0,   220,     0,   220,
     220,     0,   220,     0,   220,     0,   183,   184,   220,     0,
     220,   220,     0,     0,     0,     0,   220,     0,     0,     0,
       0,     0,     0,   221,     0,     0,   221,   221,     1,     2,
       3,     0,     0,   495,     0,   504,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,   221,     0,
       0,   221,   221,     0,     0,     0,     0,     0,   221,     0,
       0,     0,   221,   221,     0,   221,     0,   221,    41,     0,
      15,     0,   222,     0,    42,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   221,     0,   221,     0,     0,
       0,     0,   221,     0,   221,   221,     0,     0,   221,   221,
     221,     0,     0,     0,     0,     0,     0,     0,   221,     0,
     544,   221,     0,   221,   221,     0,     0,   221,     0,   221,
     221,     0,   221,     0,   221,     0,     0,     0,   221,     0,
     221,   221,     0,     0,     0,   353,   221,     0,     0,   562,
     159,   160,   161,   162,   163,   164,    28,     0,     0,   573,
     574,   222,   576,   222,     0,   222,     0,     0,   222,     0,
       0,     0,   166,   167,     0,     0,     0,     0,     0,     0,
     159,   160,   161,   162,   163,   164,    28,     0,     0,   588,
       0,   589,   590,     0,     0,   495,   504,     0,     0,     0,
     179,     0,   166,   167,     0,   599,     0,     0,   544,   546,
     182,     0,     0,   293,   562,   293,   573,   574,     0,   576,
     293,     0,     0,     0,     0,   588,     0,   589,   590,     0,
     179,     0,     0,   599,     0,     0,     0,     0,   222,     0,
     266,   222,   222,   183,   184,   269,   270,     0,   159,   160,
     161,   162,   163,   164,    28,    69,    70,    71,    72,    73,
      74,    75,    76,   222,     0,   293,   222,   222,     0,     0,
     166,   167,     0,   222,     0,     0,     0,   222,   222,     0,
     222,     0,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,   293,   293,   293,   179,     0,
     222,     0,   222,     0,   293,     0,   560,   222,   182,   222,
     222,     0,     0,   222,   222,   222,     0,     0,     0,     0,
       0,     0,     0,   222,     0,     0,   222,     0,   222,   222,
       0,     0,   222,     0,   222,   222,     0,   222,     0,   222,
       0,   183,   184,   222,     0,   222,   222,     0,   293,   293,
       3,   222,     0,     0,     0,   293,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   294,     0,   297,
     293,     0,   293,     0,   302,     0,     0,     0,   159,   160,
     161,   162,   163,   164,    28,   293,   293,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,   293,     0,   293,
     166,   167,     0,     0,     0,     0,     0,     0,     0,     0,
     304,   304,     0,     0,     0,     0,     0,     0,     0,   337,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
       0,   293,     0,     0,     0,     0,     0,   548,   182,     0,
       0,   293,     0,     0,     0,   293,   305,   305,   355,   356,
     357,   358,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
     293,   183,   184,   293,     0,     0,     0,     0,   293,   159,
     160,   161,   162,   163,   164,    28,    69,    70,    71,    72,
      73,    74,    75,    76,   304,   304,   304,   304,     0,     0,
       0,   166,   167,   412,     0,     0,     0,     0,   293,   414,
       0,     0,     0,     0,   293,     0,     0,   293,     0,     0,
       0,   293,  -336,     0,     0,     0,   337,     0,     0,   179,
     305,   305,   305,   305,     0,     0,     0,     0,     0,   266,
       0,     0,   267,   268,   269,   270,     0,     0,     0,     0,
       0,   412,     0,   434,     0,  -336,  -336,  -336,  -336,  -336,
    -336,  -336,  -336,     0,     0,  -336,  -336,  -336,     0,     0,
     293,   293,   183,   184,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   469,     0,     0,   293,     0,
       0,   304,   304,   304,   304,   304,   304,   304,   304,     0,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
       0,   304,     0,   293,   505,     0,     0,   511,     0,     0,
       0,     0,   412,     0,     0,     0,     0,   305,   305,   305,
     305,   305,   305,   305,   305,     0,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,     0,   305,     0,     0,
       0,     0,   469,     0,   304,     0,     0,     0,   523,   304,
       0,     0,     0,     0,     0,   337,   159,   160,   161,   162,
     163,   164,   165,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,   166,   167,
     305,     0,     0,     0,     0,   305,     0,     0,   168,     0,
       0,   169,     0,   170,   536,   537,   171,   172,   173,   174,
     175,   176,   177,   178,   558,   559,   179,     0,   563,     0,
     569,     0,   123,     0,   181,     0,   182,     0,     0,     0,
       0,     0,   304,     0,   304,     0,   304,     0,     0,     0,
       0,     0,   584,   159,   160,   161,   162,   163,   164,   165,
      69,    70,    71,    72,    73,    74,    75,    76,     0,   183,
     184,     0,     0,     0,     0,   166,   167,   598,   305,     0,
     305,     0,   305,     0,     0,   168,     0,     0,   169,     0,
     170,   536,   537,   171,   172,   173,   174,   175,   176,   177,
     178,     0,     0,   179,     0,     0,     0,   587,     0,   123,
       0,   181,     0,   182,     0,     0,   159,   160,   161,   162,
     163,   164,   165,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,   166,   167,
       0,     0,     0,     0,     0,     0,   183,   184,   168,     0,
       0,   169,     0,   170,     0,     0,   171,   172,   173,   174,
     175,   176,   177,   178,     0,     0,   179,     0,     0,     0,
     180,     0,   123,     0,   181,     0,   182,     0,     0,   159,
     160,   161,   162,   163,   164,   165,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,   244,   245,     0,     0,     0,     0,     0,     0,   183,
     184,   168,     0,     0,   169,     0,   170,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,     0,     0,   179,
       0,     0,     0,   246,     0,   123,     0,   181,     0,   182,
       0,     0,   159,   160,   161,   162,   163,   164,   165,    69,
      70,    71,    72,    73,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,   166,   167,     0,     0,     0,     0,
       0,     0,   183,   184,   168,     0,     0,   169,     0,   170,
       0,     0,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,     0,     0,     0,   312,     0,   123,     0,
     181,     0,   182,     0,     0,   159,   160,   161,   162,   163,
     164,   165,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
       0,     0,     0,     0,     0,   183,   184,   168,     0,     0,
     169,     0,   170,     0,     0,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,     0,     0,     0,   349,
       0,   123,     0,   181,     0,   182,     0,     0,   159,   160,
     161,   162,   163,   164,   165,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
     166,   167,     0,     0,     0,     0,     0,     0,   183,   184,
     168,     0,     0,   169,     0,   170,     0,     0,   171,   172,
     173,   174,   175,   176,   177,   178,     0,     0,   179,     0,
       0,     0,   351,     0,   123,     0,   181,     0,   182,     0,
       0,   159,   160,   161,   162,   163,   164,   165,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,     0,     0,     0,     0,
       0,   183,   184,   168,     0,     0,   169,     0,   170,     0,
       0,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,   179,     0,     0,     0,   426,     0,   123,     0,   181,
       0,   182,     0,     0,   159,   160,   161,   162,   163,   164,
     165,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,   166,   167,     0,     0,
       0,     0,     0,     0,   183,   184,   168,     0,     0,   169,
       0,   170,     0,     0,   171,   172,   173,   174,   175,   176,
     177,   178,     0,     0,   179,     0,     0,     0,     0,     0,
     123,     0,   181,     0,   182,     0,     0,   159,   160,   161,
     162,   163,   164,   491,     0,     0,     0,     0,   159,   160,
     161,   162,   163,   164,    28,     0,     0,     0,     0,   166,
     167,     0,     0,     0,     0,     0,     0,   183,   184,   168,
     166,   167,   492,     0,   170,     0,     0,   493,   172,   494,
     174,   175,   176,   177,   178,     0,     0,   179,     0,     0,
       0,     0,     0,   123,     0,   181,     0,   182,   179,     0,
       0,     0,   416,     0,   334,   417,     0,     0,   266,     0,
       0,   267,   268,   269,   270,   159,   160,   161,   162,   163,
     164,    28,     0,   320,     0,     0,     0,     0,     0,     0,
     183,   184,     0,     0,     0,     0,     0,   166,   167,     0,
       0,   183,   184,     0,     0,     0,     0,   159,   160,   161,
     162,   163,   164,    28,     0,     0,   321,   322,   323,   324,
     325,   326,   327,   328,     0,   179,   329,   330,   331,   166,
     167,     0,     0,   265,     0,   266,     0,     0,   267,   268,
     269,   270,     0,   159,   160,   161,   162,   163,   164,    28,
       0,  -334,     0,     0,     0,     0,     0,   179,     0,   310,
      45,   440,     0,   334,     0,   166,   167,   266,   183,   184,
     267,   268,   269,   270,     0,   159,   160,   161,   162,   163,
     164,    28,     0,     0,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,     0,   179,  -334,  -334,  -334,   166,   167,     0,
     183,   184,   409,   266,     0,     0,   267,   268,   269,   270,
       0,   159,   160,   161,   162,   163,   164,    28,     0,     0,
       0,     0,     0,     0,     0,   179,     0,     0,   232,     0,
       0,     0,     0,   166,   167,   266,   183,   184,   267,   268,
     269,   270,     0,   159,   160,   161,   162,   163,   164,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,   166,   167,     0,   183,   184,
     422,   266,     2,     3,   267,   268,   269,   270,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,   179,   159,   160,   161,   162,   163,   164,
      28,     0,   424,   266,   183,   184,   267,   268,   269,   270,
       0,     0,     0,    15,     0,     0,   166,   167,   159,   160,
     161,   162,   163,   164,    28,     0,   159,   160,   161,   162,
     163,   164,    28,     0,     0,     0,   183,   184,     0,     0,
     166,   167,     0,     0,   179,     0,     0,     0,   166,   167,
       0,     0,   433,     0,   266,     0,     0,   267,   268,   269,
     270,     0,     0,     0,     0,     0,     0,     0,   179,     0,
       0,     0,     0,     0,     0,     0,   179,   474,   266,     0,
       0,   267,   268,   269,   270,   488,   266,   183,   184,   267,
     268,   269,   270,   159,   160,   161,   162,   163,   164,    28,
       0,     0,   159,   160,   161,   162,   163,   164,    28,     0,
       0,   183,   184,     0,     0,   166,   167,     0,     0,   183,
     184,     0,     0,     0,   166,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,   510,   179,   266,     0,   514,   267,   268,   269,   270,
       0,     0,   266,     0,     0,   267,   268,   269,   270,   159,
     160,   161,   162,   163,   164,    28,   159,   160,   161,   162,
     163,   164,    28,     0,     0,     0,   183,   184,     0,     0,
       0,   166,   167,     0,     0,   183,   184,     0,   166,   167,
       0,   159,   160,   161,   162,   163,   164,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,     0,   166,   167,     0,   179,     0,   524,   266,
       0,     0,   267,   268,   269,   270,   266,     0,     0,   267,
     268,   269,   270,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   159,   160,   161,   162,   163,   164,    28,   583,
       0,   266,   183,   184,   267,   268,   269,   270,     0,   183,
     184,     0,     0,     0,   166,   167,   159,   160,   161,   162,
     163,   164,    28,   159,   160,   161,   162,   163,   164,    28,
       0,     0,     0,     0,   183,   184,     0,     0,   166,   167,
       0,     0,   179,     0,     0,   166,   167,     0,     0,     0,
     597,     0,   266,     0,     0,   267,   268,   269,   270,     0,
       0,     0,     0,     0,     0,     0,   179,     0,     0,     0,
       0,     0,     0,   179,     0,   578,   182,     0,     0,     0,
       0,     0,   594,   182,     0,   183,   184,     0,     0,   159,
     160,   161,   162,   163,   164,    28,   159,   160,   161,   162,
     163,   164,    28,     0,     0,     0,     0,     0,     0,   183,
     184,   166,   167,     0,     0,     0,   183,   184,   166,   167,
     159,   160,   161,   162,   163,   164,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,   166,   167,     0,     0,   179,     0,   603,   182,
       0,     0,     0,     0,     0,   605,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,   614,
     182,     0,   183,   184,     0,     0,     0,     0,     0,   183,
     184,     0,     0,     0,     0,     0,    28,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,   183,   184,     5,     6,     7,    78,     9,
      10,    11,    12,    13,    14,     0,    28,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    28,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     5,     6,     7,    78,     9,
      10,    11,    12,    13,    14,     0,    28,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,    28,    69,    70,    71,
      72,    73,    74,    75,    76,   134,     0,     0,     0,     0,
       0,     0,     0,     0,   148,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14
};

static const yytype_int16 yycheck[] =
{
       1,     2,    50,    48,    49,   262,   262,    55,   262,    54,
      78,   179,   334,   189,   142,   123,   183,   184,   122,   347,
     348,   123,   340,   136,    55,   129,     9,    55,    96,    51,
      52,   144,   136,    50,   442,   143,     9,    59,    55,    24,
      80,   143,    90,    91,     9,    24,   429,    48,    49,    50,
      59,   179,    61,    54,    55,    54,    61,   105,    55,    64,
     108,   135,     9,    51,   172,    59,    60,   112,    65,    56,
       9,    59,   248,    60,    91,   120,     0,   108,   100,   407,
     108,   189,     9,   509,   510,   133,    65,    70,    61,    90,
      91,   108,   114,   115,   134,   135,    61,   142,   266,   427,
     267,   268,   269,   270,   105,    90,    22,   108,   156,   517,
     178,   112,   186,   112,    17,     9,    63,    64,    65,   120,
     105,   120,   123,     9,   550,   541,   114,   240,    61,   151,
     117,    64,   133,   237,   179,   239,    39,   368,    59,   247,
     248,   142,   143,    59,    24,   247,   254,   465,   531,    96,
      97,   479,   568,    50,   262,   156,     9,   583,    22,    23,
      23,   483,     9,     3,     4,     5,     6,     7,     8,     9,
     596,   597,   123,   404,   350,   406,    61,   433,   179,    59,
     436,   607,   183,   184,    18,    25,    26,    62,   189,    60,
      65,    62,   143,    90,    91,    59,    59,    64,   581,   582,
      41,    42,    36,    17,    60,    19,    40,   374,   375,   376,
      60,   594,    62,    53,   382,    54,    57,   600,   346,   602,
     603,   172,   605,    63,    58,    39,    57,     9,   611,    60,
     613,   614,    41,    42,    73,    74,   619,    60,   189,    62,
      78,    59,   350,    82,    83,    65,   247,   248,    57,    87,
      96,    97,    62,   509,   510,    65,    96,    97,    60,    62,
      62,   262,    65,    64,    65,   266,   267,   268,   269,   270,
     437,   383,   384,   385,   386,    60,    61,   534,   534,    60,
     534,    62,     9,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   340,    60,   550,    62,   247,   248,    60,    61,
      62,   346,    63,   254,    60,    61,    62,    70,    71,    72,
      65,   262,     3,     4,     5,     6,     7,     8,     9,    61,
      60,   429,    62,   431,    60,   433,    62,   583,   436,    60,
      61,   399,    96,    97,    25,    26,    62,    96,    97,   340,
     596,   597,    79,    80,    81,   346,    63,    64,   515,   350,
      63,   607,    63,    64,    65,   379,   380,   381,    66,    67,
     428,   404,    53,   406,    84,    85,    51,    52,    56,   377,
     378,    62,    63,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,    56,   394,   570,   123,   387,   388,   506,   350,
      56,   509,   510,    56,    59,    96,    97,    58,     9,     9,
      64,    63,    56,    63,    63,   143,    63,   465,    63,    61,
      61,    64,    60,   531,    63,    65,   534,   535,    43,    61,
      76,    61,    61,   541,    61,    63,   437,   545,   546,    75,
     548,   442,   550,    77,   172,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    65,    86,    62,    60,     9,    63,
     568,   189,   570,    65,   465,    62,    62,   575,    62,   577,
     578,    62,    61,   581,   582,   583,    63,    60,   429,    63,
     431,    62,   433,   591,    56,   436,   594,   555,   596,   597,
      65,    56,   600,    63,   602,   603,    57,   605,    62,   607,
      56,    61,    61,   611,    59,   613,   614,    61,    58,    56,
      39,   619,    65,    61,   515,    61,   517,    58,   519,   247,
     248,    63,    39,    63,    63,    62,   254,    62,    61,    56,
      62,    61,    58,   534,   262,    39,    58,    62,    62,    62,
     541,    62,     3,     4,     5,     6,     7,     8,     9,    61,
     382,    62,   123,    61,    61,   506,    62,    62,   509,   510,
      62,    62,    19,    59,    25,    26,   225,   568,   234,   570,
     156,    91,   143,    60,    90,   539,   539,   108,   534,   400,
     531,   400,   300,   534,   535,   389,   391,   394,   519,   332,
     541,   390,    53,    -1,   545,   546,    57,   548,    59,   550,
     392,   172,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   568,   189,   570,
      -1,    -1,   350,    -1,   575,    -1,   577,   578,    -1,    -1,
     581,   582,   583,    -1,    -1,    96,    97,    -1,    -1,    -1,
     591,    -1,    -1,   594,    -1,   596,   597,    -1,    -1,   600,
      -1,   602,   603,    -1,   605,    -1,   607,    -1,    -1,    -1,
     611,    -1,   613,   614,    -1,    -1,    -1,    -1,   619,    -1,
     123,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,    -1,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    55,    -1,    -1,
     143,   262,    -1,    -1,    -1,    63,    64,    65,    -1,    -1,
      -1,   429,    -1,   431,    -1,   433,    -1,    -1,   436,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,   172,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      98,    99,   100,    25,    26,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,   506,   350,
      -1,   509,   510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,   247,   248,    -1,    -1,    -1,    -1,
      -1,   254,    -1,   531,    96,    97,   534,   535,    -1,   262,
     143,    -1,    -1,   541,    -1,    -1,    -1,   545,   546,    -1,
     548,    -1,   550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     568,    -1,   570,    -1,    -1,    -1,    -1,   575,    -1,   577,
     578,    -1,    -1,   581,   582,   583,   189,    -1,   429,    -1,
     431,    -1,   433,   591,    -1,   436,   594,    -1,   596,   597,
      -1,    -1,   600,    -1,   602,   603,    -1,   605,    -1,   607,
     581,   582,    -1,   611,    -1,   613,   614,    -1,    -1,    -1,
      -1,   619,    -1,   594,    -1,    -1,    -1,   350,    -1,   600,
      -1,   602,   603,    -1,   605,    -1,    -1,    55,    -1,    -1,
     611,    -1,   613,   614,   247,   248,    -1,    -1,   619,    -1,
      -1,   254,    -1,    -1,    -1,    -1,   172,    -1,    -1,   262,
      -1,    -1,    -1,    -1,    -1,   506,    -1,    -1,   509,   510,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     531,    -1,    -1,   534,   535,    -1,    -1,    -1,    -1,    -1,
     541,    -1,    -1,    -1,   545,   546,   429,   548,   431,   550,
     433,    -1,    -1,   436,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,   123,    -1,   568,    -1,   570,
      -1,    -1,    -1,    -1,   575,    -1,   577,   578,   254,    -1,
     581,   582,   583,    -1,    -1,   143,    -1,   350,    -1,    -1,
     591,    -1,    -1,   594,    -1,   596,   597,    -1,    -1,   600,
      -1,   602,   603,    -1,   605,    -1,   607,    -1,    -1,    -1,
     611,    -1,   613,   614,   172,    -1,    -1,    -1,   619,    -1,
      -1,    -1,    -1,   506,    -1,    -1,   509,   510,    -1,    -1,
      -1,   189,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   531,    -1,
      -1,   534,   535,    -1,    -1,    25,    26,    -1,   541,    -1,
      -1,    -1,   545,   546,    -1,   548,   429,   550,   431,    -1,
     433,    -1,    -1,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,   568,    -1,   570,    -1,   247,
     248,    61,   575,    63,   577,   578,   254,    -1,   581,   582,
     583,    -1,    -1,    -1,   262,    -1,    -1,    -1,   591,    -1,
      -1,   594,    -1,   596,   597,    -1,    -1,   600,    -1,   602,
     603,    -1,   605,    -1,   607,    -1,    96,    97,   611,    -1,
     613,   614,    -1,    -1,    -1,    -1,   619,    -1,    -1,    -1,
      -1,    -1,    -1,   506,    -1,    -1,   509,   510,    19,    20,
      21,    -1,    -1,   429,    -1,   431,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,   531,    -1,
      -1,   534,   535,    -1,    -1,    -1,    -1,    -1,   541,    -1,
      -1,    -1,   545,   546,    -1,   548,    -1,   550,    21,    -1,
      61,    -1,   350,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   568,    -1,   570,    -1,    -1,
      -1,    -1,   575,    -1,   577,   578,    -1,    -1,   581,   582,
     583,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,
     506,   594,    -1,   596,   597,    -1,    -1,   600,    -1,   602,
     603,    -1,   605,    -1,   607,    -1,    -1,    -1,   611,    -1,
     613,   614,    -1,    -1,    -1,   531,   619,    -1,    -1,   535,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,   545,
     546,   429,   548,   431,    -1,   433,    -1,    -1,   436,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,   575,
      -1,   577,   578,    -1,    -1,   581,   582,    -1,    -1,    -1,
      53,    -1,    25,    26,    -1,   591,    -1,    -1,   594,    62,
      63,    -1,    -1,   175,   600,   177,   602,   603,    -1,   605,
     182,    -1,    -1,    -1,    -1,   611,    -1,   613,   614,    -1,
      53,    -1,    -1,   619,    -1,    -1,    -1,    -1,   506,    -1,
      63,   509,   510,    96,    97,    68,    69,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   531,    -1,   227,   534,   535,    -1,    -1,
      25,    26,    -1,   541,    -1,    -1,    -1,   545,   546,    -1,
     548,    -1,   550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   256,   257,   258,   259,    53,    -1,
     568,    -1,   570,    -1,   266,    -1,    61,   575,    63,   577,
     578,    -1,    -1,   581,   582,   583,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   591,    -1,    -1,   594,    -1,   596,   597,
      -1,    -1,   600,    -1,   602,   603,    -1,   605,    -1,   607,
      -1,    96,    97,   611,    -1,   613,   614,    -1,   310,   311,
      21,   619,    -1,    -1,    -1,   317,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   175,    -1,   177,
     332,    -1,   334,    -1,   182,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,   347,   348,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,   359,    -1,   361,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,   393,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,   403,    -1,    -1,    -1,   407,   183,   184,   256,   257,
     258,   259,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,
     432,    96,    97,   435,    -1,    -1,    -1,    -1,   440,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   267,   268,   269,   270,    -1,    -1,
      -1,    25,    26,   311,    -1,    -1,    -1,    -1,   470,   317,
      -1,    -1,    -1,    -1,   476,    -1,    -1,   479,    -1,    -1,
      -1,   483,    55,    -1,    -1,    -1,   334,    -1,    -1,    53,
     267,   268,   269,   270,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,   359,    -1,   361,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    98,    99,   100,    -1,    -1,
     532,   533,    96,    97,   536,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,   560,    -1,
      -1,   374,   375,   376,   377,   378,   379,   380,   381,    -1,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
      -1,   394,    -1,   585,   432,    -1,    -1,   435,    -1,    -1,
      -1,    -1,   440,    -1,    -1,    -1,    -1,   374,   375,   376,
     377,   378,   379,   380,   381,    -1,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,    -1,   394,    -1,    -1,
      -1,    -1,   470,    -1,   437,    -1,    -1,    -1,   476,   442,
      -1,    -1,    -1,    -1,    -1,   483,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
     437,    -1,    -1,    -1,    -1,   442,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   532,   533,    53,    -1,   536,    -1,
      57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,   515,    -1,   517,    -1,   519,    -1,    -1,    -1,
      -1,    -1,   560,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    96,
      97,    -1,    -1,    -1,    -1,    25,    26,   585,   515,    -1,
     517,    -1,   519,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    35,    -1,
      -1,    38,    -1,    40,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,
      57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    35,    -1,    -1,    38,    -1,    40,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    -1,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    35,    -1,    -1,    38,    -1,    40,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    35,    -1,    -1,
      38,    -1,    40,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,    57,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      35,    -1,    -1,    38,    -1,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    35,    -1,    -1,    38,    -1,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    -1,    -1,    57,    -1,    59,    -1,    61,
      -1,    63,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    35,    -1,    -1,    38,
      -1,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    63,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    35,
      25,    26,    38,    -1,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    -1,    63,    53,    -1,
      -1,    -1,    57,    -1,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    68,    69,     3,     4,     5,     6,     7,
       8,     9,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    53,    98,    99,   100,    25,
      26,    -1,    -1,    61,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    53,    -1,    63,
      64,    65,    -1,    59,    -1,    25,    26,    63,    96,    97,
      66,    67,    68,    69,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    53,    98,    99,   100,    25,    26,    -1,
      96,    97,    62,    63,    -1,    -1,    66,    67,    68,    69,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    25,    26,    63,    96,    97,    66,    67,
      68,    69,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    25,    26,    -1,    96,    97,
      62,    63,    20,    21,    66,    67,    68,    69,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    53,     3,     4,     5,     6,     7,     8,
       9,    -1,    62,    63,    96,    97,    66,    67,    68,    69,
      -1,    -1,    -1,    61,    -1,    -1,    25,    26,     3,     4,
       5,     6,     7,     8,     9,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    96,    97,    -1,    -1,
      25,    26,    -1,    -1,    53,    -1,    -1,    -1,    25,    26,
      -1,    -1,    61,    -1,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    62,    63,    -1,
      -1,    66,    67,    68,    69,    62,    63,    96,    97,    66,
      67,    68,    69,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    96,    97,    -1,    -1,    25,    26,    -1,    -1,    96,
      97,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    53,    63,    -1,    56,    66,    67,    68,    69,
      -1,    -1,    63,    -1,    -1,    66,    67,    68,    69,     3,
       4,     5,     6,     7,     8,     9,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    25,    26,    -1,    -1,    96,    97,    -1,    25,    26,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    25,    26,    -1,    53,    -1,    62,    63,
      -1,    -1,    66,    67,    68,    69,    63,    -1,    -1,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,     3,     4,     5,     6,     7,     8,     9,    61,
      -1,    63,    96,    97,    66,    67,    68,    69,    -1,    96,
      97,    -1,    -1,    -1,    25,    26,     3,     4,     5,     6,
       7,     8,     9,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    25,    26,
      -1,    -1,    53,    -1,    -1,    25,    26,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    62,    63,    -1,    96,    97,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    25,    26,    -1,    -1,    -1,    96,    97,    25,    26,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    25,    26,    -1,    -1,    53,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    20,    21,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    61,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   152,     9,   113,
     114,   115,   113,     9,     9,     0,   118,   120,   123,   117,
     118,    21,    27,   125,    61,    64,    61,    64,    22,    23,
      59,   127,   128,   130,    22,    59,   153,   154,   118,     9,
       9,     9,    70,   109,   110,   113,   109,   111,   129,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    31,    57,
     103,   104,   105,   106,   107,   108,   109,   112,   113,   114,
     124,   131,   132,   133,   134,   139,   140,   147,   148,   149,
     128,   130,   130,   111,    57,   124,   134,   140,   155,   156,
     157,   158,    60,   154,   127,   128,   130,   153,   154,    61,
      60,     9,   141,    59,   161,     9,   135,   136,   137,   141,
      65,    65,    65,    63,    18,   103,   149,    57,   132,    61,
     146,   161,    24,    59,   144,   150,   130,    61,    57,   156,
     111,   128,   130,   130,   154,   111,    63,    65,   144,     3,
       4,     5,     6,     7,     8,     9,    25,    26,    35,    38,
      40,    43,    44,    45,    46,    47,    48,    49,    50,    53,
      57,    61,    63,    96,    97,   102,   103,   113,   161,   162,
     163,   164,   165,   166,   168,   169,   170,   172,   173,   174,
     175,   177,   183,   185,   186,   191,   192,   193,   194,   195,
     196,   200,   201,   202,   204,   208,   209,   210,   211,   212,
     213,   215,   216,   231,   232,    60,    61,    55,    65,   144,
      56,    56,    56,    62,   103,   142,   143,   141,   135,   141,
     144,   150,   110,   145,    25,    26,    57,   151,   162,   150,
     130,    62,   142,    56,    58,    64,    63,    63,    63,    63,
     113,   166,    63,     9,    61,    61,    63,    66,    67,    68,
      69,   202,   209,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   234,     9,    61,   234,   161,   104,
     109,   110,   234,   113,   208,   210,   214,   214,     9,   135,
      63,    65,    57,   163,    61,    61,    64,    65,    96,    97,
      55,    88,    89,    90,    91,    92,    93,    94,    95,    98,
      99,   100,   233,   136,    59,   138,   159,   234,    56,   137,
      60,    62,   144,    61,   144,   150,    60,    63,    63,    57,
     162,    57,    62,   166,     9,   234,   234,   234,   234,    65,
      43,    61,   165,   173,   188,   190,    61,   104,   113,   234,
     214,   214,   214,   214,    70,    71,    72,    66,    67,    79,
      80,    81,    54,    73,    74,    82,    83,    84,    85,    75,
      76,    77,    86,    78,    87,    61,    61,    61,    51,    52,
     197,   198,   199,    65,   205,   206,   205,    63,    62,    62,
     203,   234,   234,     9,   234,   230,    57,    60,   138,   160,
     143,   110,    62,   203,    62,   203,    57,    63,    62,    62,
      62,    62,    63,    61,   234,    61,    60,    62,    65,   207,
      65,   207,    62,   214,   214,   214,   219,   219,   220,   220,
     220,   104,   108,   221,   221,   221,   221,   222,   222,   223,
     224,   225,   226,   234,   227,    63,   161,   198,   199,   234,
      65,   206,   207,   207,    62,   203,    60,    62,    56,    63,
      56,    57,    57,    60,    61,    62,    61,    62,    62,   203,
     161,     9,    38,    43,    45,   166,   167,   168,   171,   176,
     184,   187,    59,   178,   166,   234,    62,   189,   190,    61,
      61,   234,   173,   214,    56,    62,    65,    62,   217,    58,
     143,    56,    62,   234,    62,   203,    57,   138,    61,    61,
      62,    58,    63,    63,    63,    39,    41,    42,    57,   179,
     180,   181,   182,    62,   166,    62,    62,   189,    62,   189,
      61,   214,    56,   217,   229,    62,    62,   167,   234,   234,
      61,   188,   166,   234,   235,    58,    57,   180,   181,    57,
     162,   182,    61,   166,   166,    62,   166,    62,    62,   189,
     161,    62,    62,    61,   234,    61,    58,    57,   166,   166,
     166,    62,   167,   167,    62,   189,    61,    61,   234,   166,
      39,   167,    62,    62,   189,    62,   189,    61,   167,   167,
     167,    62,   167,    62,    62,   189,   167,   167,   167,    62,
     167
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   106,   107,
     107,   108,   108,   109,   110,   111,   112,   112,   112,   113,
     113,   114,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   121,   122,
     123,   123,   123,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     143,   144,   145,   145,   146,   146,   147,   148,   148,   148,
     148,   149,   149,   150,   150,   150,   150,   151,   151,   151,
     151,   152,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   158,   159,   159,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   165,   166,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   169,   170,   171,   172,   173,   173,   173,   173,   173,
     173,   173,   174,   175,   176,   177,   178,   178,   178,   178,
     179,   179,   180,   181,   181,   182,   182,   183,   184,   185,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   195,   196,
     196,   196,   197,   197,   198,   199,   200,   200,   201,   201,
     201,   201,   201,   201,   201,   202,   202,   203,   203,   204,
     204,   204,   204,   205,   205,   206,   207,   207,   208,   208,
     209,   209,   209,   209,   209,   209,   210,   210,   211,   211,
     211,   211,   212,   213,   214,   214,   214,   214,   214,   215,
     216,   217,   217,   217,   217,   218,   218,   218,   218,   219,
     219,   219,   219,   220,   220,   220,   221,   221,   221,   221,
     222,   222,   222,   222,   222,   222,   223,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   228,   229,
     229,   230,   230,   231,   232,   232,   232,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   234,
     235
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       1,     1,     3,     3,     2,     2,     2,     1,     1,     1,
       0,     1,     2,     1,     2,     3,     1,     1,     3,     5,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     5,     5,     5,     4,
       4,     4,     3,     2,     2,     1,     3,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     4,     3,     3,
       2,     4,     3,     3,     2,     4,     3,     3,     1,     3,
       2,     2,     1,     3,     1,     1,     2,     4,     3,     3,
       2,     4,     3,     4,     3,     3,     2,     5,     4,     5,
       4,     5,     4,     4,     3,     2,     3,     3,     2,     1,
       2,     1,     1,     1,     2,     4,     3,     3,     2,     1,
       3,     3,     2,     1,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     7,     5,     4,     3,     3,     2,
       1,     2,     2,     1,     2,     3,     2,     5,     5,     7,
       9,     8,     8,     8,     7,     7,     7,     6,     9,     8,
       8,     8,     7,     7,     7,     6,     1,     1,     1,     1,
       3,     3,     2,     3,     2,     3,     2,     3,     5,     3,
       4,     3,     1,     2,     5,     2,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     5,     4,     1,     3,     4,
       3,     4,     3,     1,     2,     3,     2,     3,     3,     3,
       4,     3,     6,     5,     6,     5,     4,     4,     1,     1,
       1,     1,     2,     2,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     5,     4,     4,     5,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Literal: INTEGERLITERAL  */
#line 175 "parser.y"
                              {  string temp=newtemp(); emit("",(yyvsp[0].node)->label,"",temp,-1);(yyval.node)->temporary=temp;  }
#line 2342 "parser.tab.c"
    break;

  case 40: /* CompilationUnit: %empty  */
#line 280 "parser.y"
             {}
#line 2348 "parser.tab.c"
    break;

  case 91: /* VariableDeclarator: VariableDeclaratorId '=' VariableInitializer  */
#line 422 "parser.y"
                                                    { emit("",(yyvsp[0].node)->temporary,"",(yyvsp[-2].node)->label,-1); }
#line 2354 "parser.tab.c"
    break;

  case 94: /* VariableInitializer: Expression  */
#line 432 "parser.y"
                                       {(yyval.node)->temporary=(yyvsp[0].node)->temporary; }
#line 2360 "parser.tab.c"
    break;

  case 246: /* Primary: PrimaryNoNewArray  */
#line 860 "parser.y"
                                   {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2366 "parser.tab.c"
    break;

  case 248: /* PrimaryNoNewArray: Literal  */
#line 867 "parser.y"
                              {(yyval.node)->temporary=(yyvsp[0].node)->temporary; }
#line 2372 "parser.tab.c"
    break;

  case 257: /* ArgumentList: Expression  */
#line 889 "parser.y"
                         {(yyval.node)=(yyvsp[0].node);}
#line 2378 "parser.tab.c"
    break;

  case 278: /* PostfixExpression: Primary  */
#line 944 "parser.y"
                                 {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2384 "parser.tab.c"
    break;

  case 288: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 970 "parser.y"
                                      {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2390 "parser.tab.c"
    break;

  case 291: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 982 "parser.y"
                                                  {(yyval.node)->temporary=(yyvsp[0].node)->temporary; }
#line 2396 "parser.tab.c"
    break;

  case 299: /* MultiplicativeExpression: UnaryExpression  */
#line 1002 "parser.y"
                                                  {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2402 "parser.tab.c"
    break;

  case 303: /* AdditiveExpression: MultiplicativeExpression  */
#line 1012 "parser.y"
                                                        {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2408 "parser.tab.c"
    break;

  case 304: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 1014 "parser.y"
                                                          { emit("",(yyvsp[0].node)->temporary,"",(yyvsp[-2].node)->label,-1); }
#line 2414 "parser.tab.c"
    break;

  case 306: /* ShiftExpression: AdditiveExpression  */
#line 1020 "parser.y"
                                                 {(yyval.node)->temporary=(yyvsp[0].node)->temporary; }
#line 2420 "parser.tab.c"
    break;

  case 310: /* RelationalExpression: ShiftExpression  */
#line 1030 "parser.y"
                                                 {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2426 "parser.tab.c"
    break;

  case 316: /* EqualityExpression: RelationalExpression  */
#line 1044 "parser.y"
                                                   {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2432 "parser.tab.c"
    break;

  case 319: /* AndExpression: EqualityExpression  */
#line 1052 "parser.y"
                                                 {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2438 "parser.tab.c"
    break;

  case 321: /* ExclusiveOrExpression: AndExpression  */
#line 1058 "parser.y"
                                                  {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2444 "parser.tab.c"
    break;

  case 323: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 1063 "parser.y"
                                                    {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2450 "parser.tab.c"
    break;

  case 325: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 1068 "parser.y"
                                                        {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2456 "parser.tab.c"
    break;

  case 327: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 1074 "parser.y"
                                                        {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2462 "parser.tab.c"
    break;

  case 329: /* ConditionalExpression: ConditionalOrExpression  */
#line 1080 "parser.y"
                                                        {(yyval.node)->temporary=(yyvsp[0].node)->temporary; }
#line 2468 "parser.tab.c"
    break;

  case 331: /* AssignmentExpression: ConditionalExpression  */
#line 1086 "parser.y"
                                               {(yyval.node)->temporary=(yyvsp[0].node)->temporary;}
#line 2474 "parser.tab.c"
    break;

  case 332: /* AssignmentExpression: Assignment  */
#line 1088 "parser.y"
                    {(yyval.node)->temporary=(yyvsp[0].node)->temporary; cout<<"h"; }
#line 2480 "parser.tab.c"
    break;

  case 333: /* Assignment: LeftHandSide AssignmentOperator AssignmentExpression  */
#line 1092 "parser.y"
                                                                 {     cout<< (yyvsp[-2].node)->label<<" "<<(yyvsp[-1].node)->label<<" "<< (yyvsp[0].node)->label;
                                                                        string check=(yyvsp[-1].node)->label;
                                    
                                                                        if(check=="="){

                                                                        emit("",(yyvsp[-2].node)->label,"",(yyvsp[0].node)->temporary,-1);
                                                                            }}
#line 2492 "parser.tab.c"
    break;

  case 349: /* Expression: AssignmentExpression  */
#line 1136 "parser.y"
                                    {(yyval.node)->temporary=(yyvsp[0].node)->temporary; }
#line 2498 "parser.tab.c"
    break;


#line 2502 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1143 "parser.y"

int main(int argc, char** argv) {
    FILE* input_file = fopen(argv[1], "r");
    yyin = input_file;

    #ifdef YYDEBUG
        yydebug = 0;
    #endif

    yyparse();
    print3AC_code();

    fclose(input_file);

    return 0;
}

void yyerror (string msg){
    fprintf(stderr, "Error at line %d: %s\n", line_num, msg.c_str());
    exit(1);
}



