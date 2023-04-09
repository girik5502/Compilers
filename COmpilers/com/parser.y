%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;

// Declare functions used in the parser and lexer
extern int yylex();
extern int line_num;
void yyerror(string msg);
extern FILE* yyin;
// Define the AST node struct
typedef struct ast_node {
    string type;
    struct ast_node* c1;
    struct ast_node* c2;
    struct ast_node* c3;
    struct ast_node* c4;
    struct ast_node* c5;
} AST_NODE;

// Declare functions for creating and printing AST nodes
AST_NODE* create_node(string type, AST_NODE* c1, AST_NODE* c2, AST_NODE* c3, AST_NODE* c4, AST_NODE* c5);
void generate_dot_script(FILE* fp, AST_NODE* node);
void free_ast(AST_NODE* node);
AST_NODE* root=NULL;
char c[5];
%}

%union {
    int i;
    long l;
    float f;
    double d;
    char c;
    char* str;
    struct ast_node* node;
}

%token <i> INTEGERLITERAL
%token <f> FLOATINGPOINTLITERAL
%token <c> CHARACTERLITERAL
%token <str> BOOLEANLITERAL STRINGLITERAL NULLLITERAL IDENTIFIER
            BOOLEAN BYTE SHORT INT LONG CHAR FLOAT DOUBLE VOID
            PACKAGE IMPORT CLASS EXTENDS IMPLEMENTS THROWS THIS SUPER INTERFACE 
            PUBLIC PROTECTED PRIVATE STATIC ABSTRACT FINAL NATIVE SYNCHRONIZED TRANSIENT VOLATILE
            IF ELSE SWITCH CASE DEFAULT WHILE DO FOR BREAK RETURN CONTINUE THROW TRY CATCH FINALLY NEW INSTANCEOF
%token <str> '=' ']' '}' ':' '{' ',' ';' ')' '(' '.' '[' '+' '-' '~' '!' '*' '/' '%' '<' '>' '&' '^' '|' '?'
            LSHIFT RSHIFT LOGICAL_RSHIFT LTEQ GTEQ EQ NE AND OR 
            MULT_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN BIT_AND_ASSIGN EXPO_ASSIGN BIT_OR_ASSIGN INC DEC LSHIFT_ASSIGN RSHIFT_ASSIGN LOGICAL_RSHIFT_ASSIGN

%start CompilationUnit
%type <node>    Literal
                Type
                PrimitiveType
                NumericType
                IntegralType
                FloatingPointType
                ReferenceType
                ClassOrInterfaceType
                ClassType
                InterfaceType
                ArrayType
                Name
                SimpleName
                QualifiedName
                CompilationUnit
                ImportDeclarations
                TypeDeclarations
                PackageDeclaration
                ImportDeclaration
                SingleTypeImportDeclaration
                TypeImportOnDemandDeclaration
                TypeDeclaration
                Modifiers
                Modifier
                ClassDeclaration
                Super
                Interfaces
                InterfaceTypeList
                ClassBody
                ClassBodyDeclarations
                ClassBodyDeclaration
                ClassMemberDeclaration
                FieldDeclaration
                VariableDeclarators
                VariableDeclarator
                VariableDeclaratorId
                VariableInitializer
                MethodDeclaration
                MethodHeader
                MethodDeclarator
                FormalParameterList
                FormalParameter
                Throws
                ClassTypeList
                MethodBody
                StaticInitializer
                ConstructorDeclaration
                ConstructorDeclarator
                ConstructorBody
                ExplicitConstructorInvocation
                InterfaceDeclaration
                ExtendsInterfaces
                InterfaceBody
                InterfaceMemberDeclarations
                InterfaceMemberDeclaration
                ConstantDeclaration
                AbstractMethodDeclaration
                ArrayInitializer
                VariableInitializers
                Block
                BlockStatements
                BlockStatement
                LocalVariableDeclarationStatement
                LocalVariableDeclaration
                Statement
                StatementNoShortIf
                StatementWithoutTrailingSubstatement
                EmptyStatement
                LabeledStatement
                LabeledStatementNoShortIf
                ExpressionStatement
                StatementExpression
                IfThenStatement
                IfThenElseStatement
                IfThenElseStatementNoShortIf
                SwitchStatement
                SwitchBlock
                SwitchBlockStatementGroups
                SwitchBlockStatementGroup
                SwitchLabels
                SwitchLabel
                WhileStatement
                WhileStatementNoShortIf
                DoStatement
                ForStatement
                ForStatementNoShortIf
                ForInit
                ForUpdate
                StatementExpressionList
                BreakStatement
                ContinueStatement
                ReturnStatement
                ThrowStatement
                SynchronizedStatement
                TryStatement
                Catches
                CatchClause
                Finally
                Primary
                PrimaryNoNewArray
                ClassInstanceCreationExpression
                ArgumentList
                ArrayCreationExpression
                DimExprs
                DimExpr
                Dims
                FieldAccess
                MethodInvocation
                ArrayAccess
                PostfixExpression
                PostIncrementExpression
                PostDecrementExpression
                UnaryExpression
                PreIncrementExpression
                PreDecrementExpression
                UnaryExpressionNotPlusMinus
                CastExpression
                MultiplicativeExpression
                AdditiveExpression
                ShiftExpression
                RelationalExpression
                EqualityExpression
                AndExpression
                ExclusiveOrExpression
                InclusiveOrExpression
                ConditionalAndExpression
                ConditionalOrExpression
                ConditionalExpression
                AssignmentExpression
                Assignment
                LeftHandSide
                AssignmentOperator
                Expression
                ConstantExpression

%%
Literal: INTEGERLITERAL
    {
        $$=create_node("INTEGER_LITERAL", NULL, NULL, NULL, NULL, NULL);
    }
    | FLOATINGPOINTLITERAL
    {
        $$=create_node("FLOATINGPOINT_LITERAL", NULL, NULL, NULL, NULL, NULL);
    }
    | BOOLEANLITERAL
    {
        $$=create_node("BOOLEAN_LITERAL", NULL, NULL, NULL, NULL, NULL);
    }
    | CHARACTERLITERAL
    {
        $$=create_node("CHARACTER_LITERAL", NULL, NULL, NULL, NULL, NULL);
    }
    | STRINGLITERAL
    {
        $$=create_node("STRING_LITERAL", NULL, NULL, NULL, NULL, NULL);
    }
    | NULLLITERAL
    {
        $$=create_node("NULL_LITERAL", NULL, NULL, NULL, NULL, NULL);
    }
    ;

Type: PrimitiveType
    {
        $$=$1;
    }
    | ReferenceType
    {
        $$=$1;
    }
    ;

PrimitiveType: NumericType
    {
        $$=$1;
    }
    | BOOLEAN
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    ;

NumericType: IntegralType
    {
        $$=$1;
    }
    | FloatingPointType
    {
        $$=$1;
    }
    ;

IntegralType: BYTE
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | SHORT
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | INT 
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | LONG 
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | CHAR
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    ;

FloatingPointType: FLOAT 
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | DOUBLE
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    ;

ReferenceType: ClassOrInterfaceType
    {
        $$=$1;
    }
    | ArrayType
    {
        $$=$1;
    }
    ;

ClassOrInterfaceType: Name
    {
        $$=$1;
    }
    ;

ClassType: ClassOrInterfaceType
    {
        $$=$1;
    }
    ;

InterfaceType: ClassOrInterfaceType
    {
        $$=$1;
    }
    ;

ArrayType: PrimitiveType '[' ']'
    {
        $$=$1;
    }
    | Name '[' ']'
    {
        $$=$1;
    }
    | ArrayType '[' ']'
    {
        $$=$1;
    }
    ;

Name: SimpleName
    {
        $$=$1;
    }
    | QualifiedName
    {
        $$=$1;
    }
    ;

SimpleName: IDENTIFIER
    {
        struct ast_node* identifier = create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("SimpleName", identifier, NULL, NULL, NULL, NULL);
    }
    ;

QualifiedName: Name '.' IDENTIFIER
    {
        struct ast_node* identifier = create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("QualifiedName", $1, identifier, NULL, NULL, NULL);
    }
    ;

CompilationUnit: PackageDeclaration ImportDeclarations TypeDeclarations
    {
        $$=create_node("CompilationUnit", $1, $2, $3, NULL, NULL);
        root=$$;
    }
    | PackageDeclaration ImportDeclarations
    {
        $$=create_node("CompilationUnit", $1, $2, NULL, NULL, NULL);
        root=$$;
    }
    | PackageDeclaration TypeDeclarations
    {
        $$=create_node("CompilationUnit", $1, $2, NULL, NULL, NULL);
        root=$$;
    }
    | ImportDeclarations TypeDeclarations
    {
        $$=create_node("CompilationUnit", $1, $2, NULL, NULL, NULL);
        root=$$;
    }
    | PackageDeclaration
    {
        $$=create_node("CompilationUnit", $1, NULL, NULL, NULL, NULL);
        root=$$;
    }
    | ImportDeclarations
    {
        $$=create_node("CompilationUnit", $1, NULL, NULL, NULL, NULL);
        root=$$;
    }
    | TypeDeclarations
    {
        $$=create_node("CompilationUnit", $1, NULL, NULL, NULL, NULL);
        root=$$;
    }
    | %empty
    {
        $$=create_node("CompilationUnit", NULL, NULL, NULL, NULL, NULL);
        root=$$;
    }
    ;

ImportDeclarations: ImportDeclaration
    {
        $$=$1;
    }
    | ImportDeclarations ImportDeclaration
    {
        $$=create_node("ImportDeclarations", $1, $2, NULL, NULL, NULL);
    }
    ;

TypeDeclarations: TypeDeclaration
    {
        $$=$1;
    }
    | TypeDeclarations TypeDeclaration
    {
        $$=create_node("TypeDeclarations", $1, $2, NULL, NULL, NULL);
    }
    ;

PackageDeclaration: PACKAGE Name ';'
    {
        struct ast_node* package = create_node($1, NULL, NULL, NULL, NULL, NULL);
        struct ast_node* semi_colon = create_node($3, NULL, NULL, NULL, NULL, NULL);
        $$=create_node("PackageDeclaration", package, $2, semi_colon, NULL, NULL);
    }
    ;

ImportDeclaration: SingleTypeImportDeclaration
    {
        $$=$1;
    }
    | TypeImportOnDemandDeclaration
    {
        $$=$1;
    }
    ;

SingleTypeImportDeclaration: IMPORT Name ';'
    {
        struct ast_node* import = create_node($1, NULL, NULL, NULL, NULL, NULL);
        struct ast_node* semi_colon = create_node($3, NULL, NULL, NULL, NULL, NULL);
        $$=create_node("SingleTypeImportDeclaration", import, $2, semi_colon, NULL, NULL);
    }
    ;

TypeImportOnDemandDeclaration: IMPORT Name '.' '*' ';'
    {
        struct ast_node* import = create_node($1, NULL, NULL, NULL, NULL, NULL);
        struct ast_node* dot = create_node($3, NULL, NULL, NULL, NULL, NULL);
        struct ast_node* asterisk = create_node($4, NULL, NULL, NULL, NULL, NULL);
        struct ast_node* semi_colon = create_node($5, NULL, NULL, NULL, NULL, NULL);
        $$=create_node("SingleTypeImportDeclaration", import, $2, dot, asterisk, semi_colon);
    }
    ;

TypeDeclaration: ClassDeclaration
    {
        $$=$1;
    }
    | InterfaceDeclaration
    {
        $$=$1;
    }
    | ';'
    {
        struct ast_node* semi_colon = create_node($1, NULL, NULL, NULL, NULL, NULL);
        $$=create_node("TypeDeclaration", semi_colon, NULL, NULL, NULL, NULL);
    }
    ;

Modifiers: Modifier
    {
        $$=$1;
    }
    | Modifiers Modifier
    {
        $$=create_node("Modifiers", $1, $2, NULL, NULL, NULL);
    }
    ;

Modifier: PUBLIC 
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | PROTECTED 
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | PRIVATE
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | STATIC
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | ABSTRACT 
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | FINAL
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | NATIVE
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | SYNCHRONIZED
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | TRANSIENT
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | VOLATILE
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    ;

ClassDeclaration: Modifiers CLASS IDENTIFIER Super Interfaces ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", $1, class_identifier, $4, $5, $6);
    }
    | Modifiers CLASS IDENTIFIER Super ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", $1, class_identifier, $4, $5, NULL);
    }
    | Modifiers CLASS IDENTIFIER Interfaces ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", $1, class_identifier, $4, $5, NULL);
    }
    | CLASS IDENTIFIER Super Interfaces ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", class_identifier, $3, $4, $5, NULL);
    }
    | Modifiers CLASS IDENTIFIER ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", $1, class_identifier, $4, NULL, NULL);
    }
    | CLASS IDENTIFIER Super ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", class_identifier, $3, $4, NULL, NULL);
    }
    | CLASS IDENTIFIER Interfaces ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", class_identifier, $3, $4, NULL, NULL);
    }
    | CLASS IDENTIFIER ClassBody
    {
        struct ast_node* class_identifier = create_node("CLASS IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ClassDeclaration", class_identifier, $3, NULL, NULL, NULL);
    }
    ;

Super: EXTENDS ClassType
    {
        struct ast_node* extends = create_node("EXTENDS", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("Super", extends, $2, NULL, NULL, NULL);
    }
    ;

Interfaces: IMPLEMENTS InterfaceTypeList
    {
        struct ast_node* implements = create_node("IMPLEMENTS", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("Interfaces", implements, $2, NULL, NULL, NULL);
    }
    ;

InterfaceTypeList: InterfaceType
    {
        $$=$1;
    }
    | InterfaceTypeList ',' InterfaceType
    {
        $$=create_node("InterfaceTypeList", $1, $3, NULL, NULL, NULL);
    }
    ;

ClassBody: '{' ClassBodyDeclarations '}'
    {
        $$=$2;
    }
    | '{' '}'
    {
        $$=create_node("ClassBody", NULL, NULL, NULL, NULL, NULL);
    }
    ;

ClassBodyDeclarations: ClassBodyDeclaration
    {
        $$=$1;
    }
    | ClassBodyDeclarations ClassBodyDeclaration
    {
        $$=create_node("ClassBodyDeclarations", $1, $2, NULL, NULL, NULL);

    }
    ;

ClassBodyDeclaration: ClassMemberDeclaration
    {
        $$=$1;
    }
    | StaticInitializer
    {
        $$=$1;
    }
    | ConstructorDeclaration
    {
        $$=$1;
    }
    ;

ClassMemberDeclaration: FieldDeclaration
    {
        $$=$1;
    }
    | MethodDeclaration
    {
        $$=$1;
    }
    ;

FieldDeclaration: Modifiers Type VariableDeclarators ';'
    {
        $$=create_node("FieldDeclarations", $1, $2, $3, NULL, NULL);
    }
    | Type VariableDeclarators ';'
    {
        $$=create_node("FieldDeclarations", $1, $2, NULL, NULL, NULL);

    }
    ;

VariableDeclarators: VariableDeclarator
    {
        $$=$1;
    }
    | VariableDeclarators ',' VariableDeclarator
    {
        $$=create_node("VariableDeclarators", $1, $3, NULL, NULL, NULL);

    }
    ;

VariableDeclarator: VariableDeclaratorId
    {
        $$=$1;
    }
    | VariableDeclaratorId '=' VariableInitializer
    {
        $$=create_node("VariableDeclarator", $1, $3, NULL, NULL, NULL);    }
    ;

VariableDeclaratorId: IDENTIFIER
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | VariableDeclaratorId '[' ']'
    {
        $$=$1;
    }
    ;

VariableInitializer: Expression
    {
        $$=$1;
    }
    | ArrayInitializer
    {
        $$=$1;
    }
    ;

MethodDeclaration: MethodHeader MethodBody
    {
        $$=create_node("MethodDeclaration", $1, $2, NULL, NULL, NULL);
    }
    ;

MethodHeader: Modifiers Type MethodDeclarator Throws
    {
        $$=create_node("MethodHeader", $1, $2, $3, $4, NULL);    
    }
    | Modifiers Type MethodDeclarator
    {
        $$=create_node("MethodHeader", $1, $2, $3, NULL, NULL);    
    }
    | Type MethodDeclarator Throws
    {
        $$=create_node("MethodHeader", $1, $2, $3, NULL, NULL);    
    }
    | Type MethodDeclarator
    {
        $$=create_node("MethodHeader", $1, $2, NULL, NULL, NULL);    
    }
    | Modifiers VOID MethodDeclarator Throws
    {
        struct ast_node* void_methodheader = create_node("VOID", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("MethodHeader", $1, void_methodheader, $3, $4, NULL);
    }
    | Modifiers VOID MethodDeclarator
    {
        struct ast_node* void_methodheader = create_node($2, NULL, NULL, NULL, NULL, NULL);
        $$=create_node("MethodHeader", $1, void_methodheader, $3, NULL, NULL);
    }
    | VOID MethodDeclarator Throws  
    {
        struct ast_node* void_methodheader = create_node("VOID", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("MethodHeader", void_methodheader, $2, $3, NULL, NULL);
    }
    | VOID MethodDeclarator
    {
        struct ast_node* void_methodheader = create_node("VOID", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("MethodHeader", void_methodheader, $2, NULL, NULL, NULL);
    }
    ;

MethodDeclarator: IDENTIFIER '(' FormalParameterList ')'
    {
        struct ast_node* identifier_method = create_node("IDENTIFIER_METHODDECLARATOR", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("MethodDeclarator", identifier_method, $3, NULL, NULL, NULL);
    }
    | IDENTIFIER '(' ')'
    {
        struct ast_node* identifier_method = create_node("IDENTIFIER_METHODDECLARATOR", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("MethodDeclarator", identifier_method, NULL, NULL, NULL, NULL);
    }
    | MethodDeclarator '[' ']'
    {
        $$=$1;
    }
    ;

FormalParameterList: FormalParameter
    {
        
        $$=$1;
    }
    | FormalParameterList ',' FormalParameter
    {
        $$=create_node("FormalParameterList", $1, $3, NULL, NULL, NULL);
    }
    ;

FormalParameter: Type VariableDeclaratorId
    {
        $$=create_node("FormalParameter", $1, $2, NULL, NULL, NULL);
    }
    ;

Throws: THROWS ClassTypeList
    {
        struct ast_node* throws = create_node("THROWS", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("Throws", throws, $2, NULL, NULL, NULL);    
    }
    ;

ClassTypeList: ClassType
    {
        $$=$1;
    }
    | ClassTypeList ',' ClassType
    {
        $$=create_node("ClassTypeList", $1, $3, NULL, NULL, NULL);
    }
    ;

MethodBody: Block 
    {
        $$=$1;
    }
    | ';'
    {
        $$=create_node(";", NULL, NULL, NULL, NULL, NULL);
    }
    ;

StaticInitializer: STATIC Block
    {
        struct ast_node* static_staticinitializer = create_node("STATIC", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("Staticinitializer", static_staticinitializer, $2, NULL, NULL, NULL);
    }
    ;

ConstructorDeclaration: Modifiers ConstructorDeclarator Throws ConstructorBody
    {
        $$=create_node("ConstructorDeclaration", $1, $2, $3, $4, NULL);
    }
    | Modifiers ConstructorDeclarator ConstructorBody
    {
        $$=create_node("ConstructorDeclaration", $1, $2, $3, NULL, NULL);
    }
    | ConstructorDeclarator Throws ConstructorBody
    {
        $$=create_node("ConstructorDeclaration", $1, $2, $3, NULL, NULL);
    }
    | ConstructorDeclarator ConstructorBody
    {
        $$=create_node("ConstructorDeclaration", $1, $2, NULL, NULL, NULL);
    }
    ;

ConstructorDeclarator: SimpleName '(' FormalParameterList ')'
    {
        $$=create_node("ConstructorDeclarator", $1, $3, NULL, NULL, NULL);
    }
    | SimpleName '(' ')'
    {
        $$=$1;
    }
    ;

ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'
    {
        $$=create_node("ConstructorBody", $2, $3, NULL, NULL, NULL);
    }
    | '{' ExplicitConstructorInvocation '}'
    {
        $$=$2;
    }
    | '{' BlockStatements '}'
    {
        $$=$2;
    }
    | '{' '}'
    {
        $$=create_node("ConstructorBody", NULL, NULL, NULL, NULL, NULL);

    }
    ;

ExplicitConstructorInvocation: THIS '(' ArgumentList ')' ';'
    {
        struct ast_node* this_invocation = create_node("THIS_INVOCATION", NULL, NULL, NULL, NULL, NULL);
        $$=create_node("ExplicitConstructorInvocation", this_invocation, $3, NULL, NULL, NULL);
    }
    | THIS '(' ')' ';'
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);
    }
    | SUPER '(' ArgumentList ')' ';'
    {
        $$=create_node($1, NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | SUPER '(' ')' ';'
    {
        $$=create_node("SUPER", NULL, NULL, NULL, NULL, NULL);
    }
    ;

InterfaceDeclaration: Modifiers INTERFACE IDENTIFIER ExtendsInterfaces InterfaceBody
    {
        $$=$1;$$=create_node("INTERFACE", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$4;$$=$5;
    }
    | Modifiers INTERFACE IDENTIFIER InterfaceBody
    {
        $$=$1;$$=create_node("INTERFACE", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$4;
    }
    | INTERFACE IDENTIFIER ExtendsInterfaces InterfaceBody
    {
        $$=create_node("INTERFACE", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$4;
    }
    | INTERFACE IDENTIFIER InterfaceBody
    {
        $$=create_node("INTERFACE", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ExtendsInterfaces: EXTENDS InterfaceType
    {
        $$=create_node("EXTENDS", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | ExtendsInterfaces ',' InterfaceType
    {
        $$=$1;$$=$3;
    }
    ;

InterfaceBody: '{' InterfaceMemberDeclarations '}'
    {
        $$=$2;
    }
    | '{' '}'
    {
        
    }
    ;

InterfaceMemberDeclarations: InterfaceMemberDeclaration
    {
        $$=$1;
    }
    | InterfaceMemberDeclarations InterfaceMemberDeclaration
    {
        $$=$1;$$=$2;
    }
    ;

InterfaceMemberDeclaration: ConstantDeclaration
    {
        $$=$1;
    }
    | AbstractMethodDeclaration
    {
        $$=$1;
    }
    ;

ConstantDeclaration: FieldDeclaration
    {
        $$=$1;
    }
    ;

AbstractMethodDeclaration: MethodHeader ';'
    {
        $$=$1;
    }
    ;

ArrayInitializer: '{' VariableInitializers ',' '}'
    {
        $$=$2;
    }
    | '{' VariableInitializers '}'
    {
        $$=$2;
    }
    | '{' ',' '}'
    {
        
    }
    | '{' '}'
    {
        
    }
    ;

VariableInitializers: VariableInitializer
    {
        $$=$1;
    }
    | VariableInitializers ',' VariableInitializer
    {
        $$=$1;$$=$3;
    }
    ;

Block: '{' BlockStatements '}'
    {
        $$=$2;
    }
    | '{' '}'
    {
        
    }
    ;

BlockStatements: BlockStatement
    {
        $$=$1;
    }
    | BlockStatements BlockStatement
    {
        $$=$1;$$=$2;
    }
    ;

BlockStatement: LocalVariableDeclarationStatement
    {
        $$=$1;
    }
    | Statement
    {
        $$=$1;
    }
    ;

LocalVariableDeclarationStatement: LocalVariableDeclaration ';'
    {
        $$=$1;
    }
    ;

LocalVariableDeclaration: Type VariableDeclarators
    {
        $$=$1;$$=$2;
    }
    ;

Statement: StatementWithoutTrailingSubstatement
    {
        $$=$1;
    }
    | LabeledStatement
    {
        $$=$1;
    }
    | IfThenStatement
    {
        $$=$1;
    }
    | IfThenElseStatement
    {
        $$=$1;
    }
    | WhileStatement
    {
        $$=$1;
    }
    | ForStatement
    {
        $$=$1;
    }
    ;

StatementNoShortIf: StatementWithoutTrailingSubstatement
    {
        $$=$1;
    }
    | LabeledStatementNoShortIf
    {
        $$=$1;
    }
    | IfThenElseStatementNoShortIf
    {
        $$=$1;
    }
    | WhileStatementNoShortIf
    {
        $$=$1;
    }
    | ForStatementNoShortIf
    {
        $$=$1;
    }
    ;

StatementWithoutTrailingSubstatement: Block
    {
        $$=$1;
    }
    | EmptyStatement
    {
        $$=$1;
    }
    | ExpressionStatement
    {
        $$=$1;
    }
    | SwitchStatement
    {
        $$=$1;
    }
    | DoStatement
    {
        $$=$1;
    }
    | BreakStatement
    {
        $$=$1;
    }
    | ContinueStatement
    {
        $$=$1;
    }
    | ReturnStatement
    {
        $$=$1;
    }
    | SynchronizedStatement
    {
        $$=$1;
    }
    | ThrowStatement
    {
        $$=$1;
    }
    | TryStatement
    {
        $$=$1;
    }
    ;

EmptyStatement: ';'
    {
        $$=create_node(";", NULL, NULL, NULL, NULL, NULL);
    }
    ;

LabeledStatement: IDENTIFIER ':' Statement
    {
        $$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

LabeledStatementNoShortIf: IDENTIFIER ':' StatementNoShortIf
    {
        $$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ExpressionStatement: StatementExpression ';'
    {
        $$=$1;
    }
    ;

StatementExpression: Assignment
    {
        $$=$1;
    }
    | PreIncrementExpression
    {
        $$=$1;
    }
    | PreDecrementExpression
    {
        $$=$1;
    }
    | PostIncrementExpression
    {
        $$=$1;
    }
    | PostDecrementExpression
    {
        $$=$1;
    }
    | MethodInvocation
    {
        $$=$1;
    }
    | ClassInstanceCreationExpression
    {
        $$=$1;
    }
    ;

IfThenStatement: IF '(' Expression ')' Statement
    {
        $$=create_node("IF", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement
    {
        $$=create_node("IF", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;$$=create_node("ELSE", NULL, NULL, NULL, NULL, NULL);$$=$7;
    }
    ;

IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf
    {
        $$=create_node("IF", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;$$=create_node("ELSE", NULL, NULL, NULL, NULL, NULL);$$=$7;
    }
    ;

SwitchStatement: SWITCH '(' Expression ')' SwitchBlock
    {
        $$=create_node("SWITCH", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

SwitchBlock: '{' SwitchBlockStatementGroups SwitchLabels '}'
    {
        $$=$2;$$=$3;
    }
    | '{' SwitchBlockStatementGroups '}'
    {
        $$=$2;
    }
    | '{' SwitchLabels '}'
    {
        $$=$2;
    }
    | '{' '}'
    {
        
    }
    ;

SwitchBlockStatementGroups: SwitchBlockStatementGroup
    {
        $$=$1;
    }
    | SwitchBlockStatementGroups SwitchBlockStatementGroup
    {
        $$=$1;$$=$2;
    }
    ;

SwitchBlockStatementGroup: SwitchLabels BlockStatements
    {
        $$=$1;$$=$2;
    }
    ;

SwitchLabels: SwitchLabel
    {
        $$=$1;
    }
    | SwitchLabels SwitchLabel
    {
        $$=$1;$$=$2;
    }
    ;

SwitchLabel: CASE ConstantExpression ':'
    {
        $$=create_node("CASE", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | DEFAULT ':'
    {
        $$=create_node("DEFAULT", NULL, NULL, NULL, NULL, NULL);
    }
    ;

WhileStatement: WHILE '(' Expression ')' Statement
    {
        $$=create_node("WHILE", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf
    {
        $$=create_node("WHILE", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

DoStatement: DO Statement WHILE '(' Expression ')' ';'
    {
        $$=create_node("DO", NULL, NULL, NULL, NULL, NULL);$$=$2;$$=create_node("WHILE", NULL, NULL, NULL, NULL, NULL);$$=$5;
    }
    ;

ForStatement: FOR '(' ForInit ';' Expression ';' ForUpdate ')' Statement
    {
        $$=create_node("FOR", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;$$=$7;$$=$9;
    }
    | FOR '(' ForInit ';' Expression ';' ')' Statement
    {
        
    }
    | FOR '(' ForInit ';' ';' ForUpdate ')' Statement
    {
        
    }
    | FOR '(' ';' Expression ';' ForUpdate ')' Statement
    {
        
    }
    | FOR '(' ForInit ';' ';' ')' Statement
    {
        
    }
    | FOR '(' ';' Expression ';' ')' Statement
    {
        
    }
    | FOR '(' ';' ';' ForUpdate ')' Statement
    {
        
    }
    | FOR '(' ';' ';' ')' Statement
    {
        
    }
    ;

ForStatementNoShortIf: FOR '(' ForInit ';' Expression ';' ForUpdate ')' StatementNoShortIf
    {
        $$=create_node("FOR", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;$$=$7;$$=$9;
    }
    | FOR '(' ForInit ';' Expression ';' ')' StatementNoShortIf
    {

    }
    | FOR '(' ForInit ';' ';' ForUpdate ')' StatementNoShortIf
    {

    }
    | FOR '(' ';' Expression ';' ForUpdate ')' StatementNoShortIf
    {

    }
    | FOR '(' ForInit ';' ';' ')' StatementNoShortIf
    {

    }
    | FOR '(' ';' Expression ';' ')' StatementNoShortIf
    {

    }
    | FOR '(' ';' ';' ForUpdate ')' StatementNoShortIf
    {

    }
    | FOR '(' ';' ';' ')' StatementNoShortIf
    {

    }
    ;
    
ForInit: StatementExpressionList
    {
        $$=$1;
    }
    | LocalVariableDeclaration
    {
        $$=$1;
    }
    ;

ForUpdate: StatementExpressionList
    {
        $$=$1;
    }
    ;

StatementExpressionList: StatementExpression
    {
        $$=$1;
    }
    | StatementExpressionList ',' StatementExpression
    {
        $$=$1;$$=$3;
    }
    ;

BreakStatement: BREAK IDENTIFIER ';'
    {
        $$=create_node("BREAK", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
    }
    | BREAK ';'
    {

    }
    ;

ContinueStatement: CONTINUE IDENTIFIER ';'
    {
        $$=create_node("CONTINUE", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
    }
    | CONTINUE ';'
    {

    }
    ;

ReturnStatement: RETURN Expression ';'
    {
        $$=create_node("RETURN", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | RETURN ';'
    {
        
    }
    ;

ThrowStatement: THROW Expression ';'
    {
        $$=create_node("THROW", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    ;

SynchronizedStatement: SYNCHRONIZED '(' Expression ')' Block
    {
        $$=create_node("SYNCHRONIZED", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

TryStatement: TRY Block Catches
    {
        $$=create_node("TRY", NULL, NULL, NULL, NULL, NULL);$$=$2;$$=$3;
    }
    | TRY Block Catches Finally
    {
        $$=create_node("TRY", NULL, NULL, NULL, NULL, NULL);$$=$2;$$=$3;$$=$4;
    }
    | TRY Block Finally
    {

    }
    ;

Catches: CatchClause
    {
        $$=$1;
    }
    | Catches CatchClause
    {
        $$=$1;$$=$2;
    }
    ;

CatchClause: CATCH '(' FormalParameter ')' Block
    {
        $$=create_node("CATCH", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

Finally: FINALLY Block
    {
        $$=create_node("FINALLY", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    ;

Primary: PrimaryNoNewArray 
    {
        $$=$1;
    }
    | ArrayCreationExpression
    {
        $$=$1;
    }
    ;

PrimaryNoNewArray: 
    Literal
    {
        $$=$1;
    }
    | THIS
    {
        $$=create_node("THIS", NULL, NULL, NULL, NULL, NULL);
    }
    | '(' Expression ')'
    {
        $$=$2;
    }
    | ClassInstanceCreationExpression
    {
        $$=$1;
    }
    | FieldAccess
    {
        $$=$1;
    }
    | MethodInvocation
    {
        $$=$1;
    }
    | ArrayAccess
    {
        $$=$1;
    }
    ;

ClassInstanceCreationExpression: NEW ClassType '(' ArgumentList ')'
    {
        $$=create_node("NEW", NULL, NULL, NULL, NULL, NULL);$$=$2;$$=$4;
    }
    | NEW ClassType '(' ')'
    {
        
    }
    ;
    
ArgumentList: Expression {$$=$1;} | ArgumentList ',' Expression
    {
        $$=$1;$$=$3;
    }
    ;

ArrayCreationExpression: NEW PrimitiveType DimExprs Dims
    {
        $$=create_node("NEW", NULL, NULL, NULL, NULL, NULL);$$=$2;$$=$3;$$=$4;
    }
    | NEW PrimitiveType DimExprs
    {

    }
    | NEW ClassOrInterfaceType DimExprs Dims
    {
        $$=create_node("NEW", NULL, NULL, NULL, NULL, NULL);$$=$2;$$=$3;$$=$4;
    }
    | NEW ClassOrInterfaceType DimExprs
    {
        
    }
    ;

DimExprs: DimExpr
    {
        $$=$1;
    }
    | DimExprs DimExpr
    {
        $$=$1;$$=$2;
    }
    ;

DimExpr: '[' Expression ']'
    {
        $$=$2;
    }
    ;

Dims: '[' ']'
    {

    }
    | Dims '[' ']'
    {
        $$=$1;
    }
    ;

FieldAccess: Primary '.' IDENTIFIER
    {
        $$=$1;$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
    }
    | SUPER '.' IDENTIFIER
    {
        $$=create_node("SUPER", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
    }
    ;

MethodInvocation: Name '(' ArgumentList ')'
    {
        $$=$1;$$=$3;
    }
    | Name '(' ')'
    {
        $$=$1;
    }
    | Primary '.' IDENTIFIER '(' ArgumentList ')'
    {
        $$=$1;$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$5;
    }
    | Primary '.' IDENTIFIER '(' ')'
    {
        $$=$1;$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
    }
    | SUPER '.' IDENTIFIER '(' ArgumentList ')'
    {
        $$=create_node("SUPER", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);$$=$5;
    }
    | SUPER '.' IDENTIFIER '(' ')'
    {
        $$=create_node("SUPER", NULL, NULL, NULL, NULL, NULL);$$=create_node("IDENTIFIER", NULL, NULL, NULL, NULL, NULL);
    }
    ;

ArrayAccess: Name '[' Expression ']'
    {
        $$=$1;$$=$3;
    }
    | PrimaryNoNewArray '[' Expression ']'
    {
        $$=$1;$$=$3;
    }
    ;

PostfixExpression: Primary
    {
        $$=$1;
    }
    | Name
    {
        $$=$1;
    }
    | PostIncrementExpression
    {
        $$=$1;
    }
    | PostDecrementExpression
    {
        $$=$1;
    }
    ;

PostIncrementExpression: PostfixExpression INC
    {
        $$=$1;$$=create_node("++", NULL, NULL, NULL, NULL, NULL);
    }
    ;

PostDecrementExpression: PostfixExpression DEC
    {
        $$=$1;$$=create_node("--", NULL, NULL, NULL, NULL, NULL);
    }
    ;

UnaryExpression: PreIncrementExpression
    {
        $$=$1;
    }
    | PreDecrementExpression
    {
        $$=$1;
    }
    | '+' UnaryExpression
    {
        $$=create_node("+", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | '-' UnaryExpression
    {
        $$=create_node("-", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | UnaryExpressionNotPlusMinus
    {
        $$=$1;
    }
    ;

PreIncrementExpression: INC UnaryExpression
    {
        $$=create_node("++", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    ;

PreDecrementExpression: DEC UnaryExpression
    {
        $$=create_node("--", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    ;

UnaryExpressionNotPlusMinus: PostfixExpression
    {
        $$=$1;
    }
    | '~' UnaryExpression
    {
        $$=create_node("~", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | '!' UnaryExpression
    {
        $$=create_node("!", NULL, NULL, NULL, NULL, NULL);$$=$2;
    }
    | CastExpression
    {
        $$=$1;
    }
    ;

CastExpression: '(' PrimitiveType Dims')' UnaryExpression
    {
        $$=$2;$$=$3;$$=$5;
    }
    | '(' PrimitiveType ')' UnaryExpression
    {
        $$=$2;$$=$4;
    }
    | '(' Expression ')' UnaryExpressionNotPlusMinus
    {
        $$=$2;$$=$4;
    }
    | '(' Name Dims ')' UnaryExpressionNotPlusMinus
    {
        $$=$2;$$=$3;$$=$5;
    }
    ;

MultiplicativeExpression: UnaryExpression
    {
        $$=$1;
    }
    | MultiplicativeExpression '*' UnaryExpression
    {
        $$=$1;$$=create_node("*", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | MultiplicativeExpression '/' UnaryExpression
    {
        $$=$1;$$=create_node("/", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | MultiplicativeExpression '%' UnaryExpression
    {
        $$=$1;$$=$3;
    }
    ;

AdditiveExpression: MultiplicativeExpression
    {
        $$=$1;
    }
    | AdditiveExpression '+' MultiplicativeExpression
    {
        $$=$1;$$=create_node("+", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | AdditiveExpression '-' MultiplicativeExpression
    {
        $$=$1;$$=create_node("-", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ShiftExpression: AdditiveExpression
    {
        $$=$1;
    }
    | ShiftExpression LSHIFT AdditiveExpression
    {
        $$=$1;$$=create_node("<<", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | ShiftExpression RSHIFT AdditiveExpression
    {
        $$=$1;$$=create_node(">>", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | ShiftExpression LOGICAL_RSHIFT AdditiveExpression
    {
        $$=$1;$$=create_node(">>>", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

RelationalExpression: ShiftExpression
    {
        $$=$1;
    }
    | RelationalExpression '<' ShiftExpression
    {
        $$=$1;$$=create_node("<", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | RelationalExpression '>' ShiftExpression
    {
        $$=$1;$$=create_node(">", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | RelationalExpression LTEQ ShiftExpression
    {
        $$=$1;$$=create_node("<=", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | RelationalExpression GTEQ ShiftExpression
    {
        $$=$1;$$=create_node(">=", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | RelationalExpression INSTANCEOF ReferenceType
    {
        $$=$1;$$=create_node("INSTANCEOF", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

EqualityExpression: RelationalExpression
    {
        $$=$1;
    }
    | EqualityExpression EQ RelationalExpression
    {
        $$=$1;$$=create_node("==", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    | EqualityExpression NE RelationalExpression
    {
        $$=$1;$$=create_node("!=", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

AndExpression: EqualityExpression
    {
        $$=$1;
    }
    | AndExpression '&' EqualityExpression
    {
        $$=$1;$$=create_node("&", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ExclusiveOrExpression: AndExpression
    {
        $$=$1;
    }
    | ExclusiveOrExpression '^' AndExpression
    {
        $$=$1;$$=create_node("^", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

InclusiveOrExpression: ExclusiveOrExpression
    {
        $$=$1;
    }
    | InclusiveOrExpression '|' ExclusiveOrExpression
    {
        $$=$1;$$=create_node("|", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ConditionalAndExpression: InclusiveOrExpression
    {
        $$=$1;
    }
    | ConditionalAndExpression AND InclusiveOrExpression
    {
        $$=$1;$$=create_node("&&", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ConditionalOrExpression: ConditionalAndExpression
    {
        $$=$1;
    }
    | ConditionalOrExpression OR ConditionalAndExpression
    {
        $$=$1;$$=create_node("||", NULL, NULL, NULL, NULL, NULL);$$=$3;
    }
    ;

ConditionalExpression: ConditionalOrExpression
    {
        $$=$1;
    }
    | ConditionalOrExpression '?' Expression ':' ConditionalExpression
    {
        $$=$1;$$=create_node("?", NULL, NULL, NULL, NULL, NULL);$$=$3;$$=$5;
    }
    ;

AssignmentExpression: ConditionalExpression
    {
        $$=$1;
    }
    | Assignment
    {
        $$=$1;
    }
    ;

Assignment: LeftHandSide AssignmentOperator AssignmentExpression
    {
        $$=$1;$$=$2;$$=$3;
    }
    ;

LeftHandSide: Name
    {
        $$=$1;
    }
    | FieldAccess
    {
        $$=$1;
    }
    | ArrayAccess
    {
        $$=$1;
    }
    ;

AssignmentOperator: '=' 
    {
        $$=create_node("=", NULL, NULL, NULL, NULL, NULL);
    }
    | MULT_ASSIGN
    {
        $$=create_node("*=", NULL, NULL, NULL, NULL, NULL);
    }
    | DIV_ASSIGN
    {
        $$=create_node("/=", NULL, NULL, NULL, NULL, NULL);
    }
    | MOD_ASSIGN
    {
        $$=create_node("%=", NULL, NULL, NULL, NULL, NULL);
    }
    | ADD_ASSIGN
    {
        $$=create_node("+=", NULL, NULL, NULL, NULL, NULL);
    }
    | SUB_ASSIGN
    {
        $$=create_node("-=", NULL, NULL, NULL, NULL, NULL);
    }
    | LSHIFT_ASSIGN
    {
        $$=create_node("<<=", NULL, NULL, NULL, NULL, NULL);
    }
    | RSHIFT_ASSIGN
    {
        $$=create_node(">>=", NULL, NULL, NULL, NULL, NULL);
    }
    | LOGICAL_RSHIFT_ASSIGN
    {
        $$=create_node("<<<=", NULL, NULL, NULL, NULL, NULL);
    }
    | BIT_AND_ASSIGN
    {
        $$=create_node("=&", NULL, NULL, NULL, NULL, NULL);
    }
    | EXPO_ASSIGN
    {
        $$=create_node("^=", NULL, NULL, NULL, NULL, NULL);
    }
    | BIT_OR_ASSIGN
    {
        $$=create_node("|=", NULL, NULL, NULL, NULL, NULL);
    }
    ;

Expression: AssignmentExpression
    {
        $$=$1;
    }
    ;

ConstantExpression: Expression
    {
        $$=$1;
    }
    ;
%%
int main(int argc, char** argv) {
    FILE* input_file = fopen(argv[1], "r");
    yyin = input_file;

    #ifdef YYDEBUG
        yydebug = 1;
    #endif

    yyparse();

    fclose(input_file);

    // Generate DOT script for the AST
    FILE* fp = fopen("ast.dot", "w");
    fprintf(fp, "digraph {\n");
    generate_dot_script(fp, root);
    fprintf(fp, "}\n");
    fclose(fp);

    // Use Graphviz to render the AST as a PNG image
    system("dot -Tpng ast.dot -o ast.png");

    // Free the AST nodes
    free_ast(root);
    return 0;
}


AST_NODE* create_node(string type, AST_NODE* c1, AST_NODE* c2, AST_NODE* c3, AST_NODE* c4, AST_NODE* c5) {
    AST_NODE* node = (AST_NODE*) malloc(sizeof(AST_NODE));
    node->type = type;
    node->c1 = c1;
    node->c2 = c2;
    node->c3 = c3;
    node->c4 = c4;
    node->c5 = c5;
    return node;
}

// Generate a DOT script for the AST rooted at `node`
void generate_dot_script(FILE* fp, AST_NODE* node) {
    // Generate DOT statement for this node
    fprintf(fp, "\"%p\" [label=\"%s\"]\n", (void*)node, node->type.c_str());

    // Recursively generate DOT statements for children
    if (node->c1) {
        fprintf(fp, "\"%p\" -> \"%p\"\n", (void*)node, (void*)node->c1);
        generate_dot_script(fp, node->c1);
    }
    if (node->c2) {
        fprintf(fp, "\"%p\" -> \"%p\"\n", (void*)node, (void*)node->c2);
        generate_dot_script(fp, node->c2);
    }
    if (node->c3) {
        fprintf(fp, "\"%p\" -> \"%p\"\n", (void*)node, (void*)node->c3);
        generate_dot_script(fp, node->c3);
    }
    if (node->c4) {
        fprintf(fp, "\"%p\" -> \"%p\"\n", (void*)node, (void*)node->c4);
        generate_dot_script(fp, node->c4);
    }
    if (node->c5) {
        fprintf(fp, "\"%p\" -> \"%p\"\n", (void*)node, (void*)node->c5);
        generate_dot_script(fp, node->c5);
    }
}

void free_ast(AST_NODE* node) {
    if (node->c1) {
        free_ast(node->c1);
    }
    if (node->c2) {
        free_ast(node->c2);
    }
    if (node->c3) {
        free_ast(node->c3);
    }
    if (node->c4) {
        free_ast(node->c4);
    }
    if (node->c5) {
        free_ast(node->c5);
    }
    delete node;
}

void yyerror (string msg){
    fprintf(stderr, "Error at line %d: %s\n", line_num, msg.c_str());
    exit(1);
}
