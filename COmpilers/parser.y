%{
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
%}

%union {
  struct ast_node * node;

}

%token <node> INTEGERLITERAL
%token <node> FLOATINGPOINTLITERAL
%token <node> CHARACTERLITERAL
%token <node> BOOLEANLITERAL STRINGLITERAL NULLLITERAL IDENTIFIER
            BOOLEAN BYTE SHORT INT LONG CHAR FLOAT DOUBLE VOID
            PACKAGE IMPORT CLASS EXTENDS IMPLEMENTS THROWS THIS SUPER INTERFACE 
            PUBLIC PROTECTED PRIVATE STATIC ABSTRACT FINAL NATIVE SYNCHRONIZED TRANSIENT VOLATILE
            IF ELSE SWITCH CASE DEFAULT WHILE DO FOR BREAK RETURN CONTINUE THROW TRY CATCH FINALLY NEW INSTANCEOF
%token <node> '=' ']' '}' ':' '{' ',' ';' ')' '(' '.' '[' '+' '-' '~' '!' '*' '/' '%' '<' '>' '&' '^' '|' '?'
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
Literal: INTEGERLITERAL       {  string temp=newtemp(); emit("",$1->label,"",temp,-1);$$->temporary=temp;  }

    | FLOATINGPOINTLITERAL

    | BOOLEANLITERAL

    | CHARACTERLITERAL

    | STRINGLITERAL

    | NULLLITERAL
    

    ;

Type: PrimitiveType

    | ReferenceType

    ;

PrimitiveType: NumericType

    | BOOLEAN

    ;

NumericType: IntegralType

    | FloatingPointType

    ;

IntegralType: BYTE
  
    | SHORT

    | INT 
  
    | LONG 
  
    | CHAR
   
    ;

FloatingPointType: FLOAT 

    | DOUBLE

    ;

ReferenceType: ClassOrInterfaceType
 
    | ArrayType
 
    ;

ClassOrInterfaceType: Name

    ;

ClassType: ClassOrInterfaceType
 
    ;

InterfaceType: ClassOrInterfaceType

    ;

ArrayType: PrimitiveType '[' ']'
 
    | Name '[' ']'
   
    | ArrayType '[' ']'
 
    ;

Name: SimpleName

    | QualifiedName
 
    ;

SimpleName: IDENTIFIER

    ;

QualifiedName: Name '.' IDENTIFIER
 
    ;

CompilationUnit: PackageDeclaration ImportDeclarations TypeDeclarations
 
    | PackageDeclaration ImportDeclarations
  
    | PackageDeclaration TypeDeclarations
 
    | ImportDeclarations TypeDeclarations
  
    | PackageDeclaration
   
    | ImportDeclarations
  
    | TypeDeclarations
   
    | %empty {}
  
    ;

ImportDeclarations: ImportDeclaration

    | ImportDeclarations ImportDeclaration
 
    ;

TypeDeclarations: TypeDeclaration

    | TypeDeclarations TypeDeclaration
  
    ;

PackageDeclaration: PACKAGE Name ';'

    ;

ImportDeclaration: SingleTypeImportDeclaration
 
    | TypeImportOnDemandDeclaration
  
    ;

SingleTypeImportDeclaration: IMPORT Name ';'
 
    ;

TypeImportOnDemandDeclaration: IMPORT Name '.' '*' ';'

    ;

TypeDeclaration: ClassDeclaration

    | InterfaceDeclaration

    | ';'

    ;

Modifiers: Modifier
  
    | Modifiers Modifier
  
    ;

Modifier: PUBLIC 

    | PROTECTED 
  
    | PRIVATE

    | STATIC
 
    | ABSTRACT 
 
    | FINAL
 
    | NATIVE
  
    | SYNCHRONIZED
   
    | TRANSIENT
    
    | VOLATILE

    ;

ClassDeclaration: Modifiers CLASS IDENTIFIER Super Interfaces ClassBody
  
    | Modifiers CLASS IDENTIFIER Super ClassBody

    | Modifiers CLASS IDENTIFIER Interfaces ClassBody

    | CLASS IDENTIFIER Super Interfaces ClassBody
 
    | Modifiers CLASS IDENTIFIER ClassBody

    | CLASS IDENTIFIER Super ClassBody
  
    | CLASS IDENTIFIER Interfaces ClassBody

    | CLASS IDENTIFIER ClassBody
 
    ;

Super: EXTENDS ClassType

    ;

Interfaces: IMPLEMENTS InterfaceTypeList
   
    ;

InterfaceTypeList: InterfaceType
 
    | InterfaceTypeList ',' InterfaceType
   
    ;

ClassBody: '{' ClassBodyDeclarations '}'
  
    | '{' '}'
  
    ;

ClassBodyDeclarations: ClassBodyDeclaration
  
    | ClassBodyDeclarations ClassBodyDeclaration
  
    ;

ClassBodyDeclaration: ClassMemberDeclaration
  
    | StaticInitializer
  
    | ConstructorDeclaration
   
    ;

ClassMemberDeclaration: FieldDeclaration
   
    | MethodDeclaration
   
    ;

FieldDeclaration: Modifiers Type VariableDeclarators ';'
   
    | Type VariableDeclarators ';'
  
    ;

VariableDeclarators: VariableDeclarator
    
    | VariableDeclarators ',' VariableDeclarator
 
    ;

VariableDeclarator: VariableDeclaratorId
   
    | VariableDeclaratorId '=' VariableInitializer  { emit("",$3->temporary,"",$1->label,-1); }
    
    ;

VariableDeclaratorId: IDENTIFIER 
 
    | VariableDeclaratorId '[' ']'

    ;

VariableInitializer: Expression        {$$->temporary=$1->temporary; }
 
    | ArrayInitializer

    ;

MethodDeclaration: MethodHeader MethodBody

    ;

MethodHeader: Modifiers Type MethodDeclarator Throws
  
    | Modifiers Type MethodDeclarator
  
    | Type MethodDeclarator Throws
   
    | Type MethodDeclarator
   
    | Modifiers VOID MethodDeclarator Throws
   
    | Modifiers VOID MethodDeclarator
    
    | VOID MethodDeclarator Throws  
  
    | VOID MethodDeclarator
    
    ;

MethodDeclarator: IDENTIFIER '(' FormalParameterList ')'
 
    | IDENTIFIER '(' ')'

    | MethodDeclarator '[' ']'
   
    ;

FormalParameterList: FormalParameter
 
    | FormalParameterList ',' FormalParameter
 
    ;

FormalParameter: Type VariableDeclaratorId
 
    ;

Throws: THROWS ClassTypeList
   
    ;

ClassTypeList: ClassType
    
    | ClassTypeList ',' ClassType
 
    ;

MethodBody: Block 
  
    | ';'

    ;

StaticInitializer: STATIC Block
   
    ;

ConstructorDeclaration: Modifiers ConstructorDeclarator Throws ConstructorBody
  
    | Modifiers ConstructorDeclarator ConstructorBody
 
    | ConstructorDeclarator Throws ConstructorBody
   
    | ConstructorDeclarator ConstructorBody
   
    ;

ConstructorDeclarator: SimpleName '(' FormalParameterList ')'
  
    | SimpleName '(' ')'
   
    ;

ConstructorBody: '{' ExplicitConstructorInvocation BlockStatements '}'
  
    | '{' ExplicitConstructorInvocation '}'
    
    | '{' BlockStatements '}'
   
    | '{' '}'
  
    ;

ExplicitConstructorInvocation: THIS '(' ArgumentList ')' ';'
  
    | THIS '(' ')' ';'
  
    | SUPER '(' ArgumentList ')' ';'
 
    | SUPER '(' ')' ';'
 
    ;

InterfaceDeclaration: Modifiers INTERFACE IDENTIFIER ExtendsInterfaces InterfaceBody
 
    | Modifiers INTERFACE IDENTIFIER InterfaceBody
 
    | INTERFACE IDENTIFIER ExtendsInterfaces InterfaceBody
  
    | INTERFACE IDENTIFIER InterfaceBody
  
    ;

ExtendsInterfaces: EXTENDS InterfaceType

    | ExtendsInterfaces ',' InterfaceType
 
    ;

InterfaceBody: '{' InterfaceMemberDeclarations '}'
   
    | '{' '}'

    ;

InterfaceMemberDeclarations: InterfaceMemberDeclaration

    | InterfaceMemberDeclarations InterfaceMemberDeclaration
 
    ;

InterfaceMemberDeclaration: ConstantDeclaration
   
    | AbstractMethodDeclaration
  
    ;

ConstantDeclaration: FieldDeclaration
  
    ;

AbstractMethodDeclaration: MethodHeader ';'
   
    ;

ArrayInitializer: '{' VariableInitializers ',' '}'
   
    | '{' VariableInitializers '}'
   
    | '{' ',' '}'
   
    | '{' '}'
   
    ;

VariableInitializers: VariableInitializer
   
    | VariableInitializers ',' VariableInitializer
  
    ;

Block: '{' BlockStatements '}'
   
    | '{' '}'
   
    ;

BlockStatements: BlockStatement
  
    | BlockStatements BlockStatement
  
    ;

BlockStatement: LocalVariableDeclarationStatement
  
    | Statement
  
    ;

LocalVariableDeclarationStatement: LocalVariableDeclaration ';'
  
    ;

LocalVariableDeclaration: Type VariableDeclarators
   
    ;

Statement: StatementWithoutTrailingSubstatement
  
    | LabeledStatement
   
    | IfThenStatement
   
    | IfThenElseStatement
    
    | WhileStatement
   
    | ForStatement
   
    ;

StatementNoShortIf: StatementWithoutTrailingSubstatement
  
    | LabeledStatementNoShortIf
   
    | IfThenElseStatementNoShortIf
   
    | WhileStatementNoShortIf
   
    | ForStatementNoShortIf
  
    ;

StatementWithoutTrailingSubstatement: Block
 
    | EmptyStatement
   
    | ExpressionStatement
  
    | SwitchStatement
 
    | DoStatement

    | BreakStatement
  
    | ContinueStatement
   
    | ReturnStatement
    
    | SynchronizedStatement
  
    | ThrowStatement
  
    | TryStatement
  
    ;

EmptyStatement: ';'
   
    ;

LabeledStatement: IDENTIFIER ':' Statement
   
    ;

LabeledStatementNoShortIf: IDENTIFIER ':' StatementNoShortIf
  
    ;

ExpressionStatement: StatementExpression ';'
    
    ;

StatementExpression: Assignment
    
    | PreIncrementExpression
   
    | PreDecrementExpression
   
    | PostIncrementExpression
   
    | PostDecrementExpression
   
    | MethodInvocation
  
    | ClassInstanceCreationExpression
  
    ;

IfThenStatement: IF '(' Expression ')' Statement
  
    ;

IfThenElseStatement: IF '(' Expression ')' StatementNoShortIf ELSE Statement
  
    ;

IfThenElseStatementNoShortIf: IF '(' Expression ')' StatementNoShortIf ELSE StatementNoShortIf
  
    ;

SwitchStatement: SWITCH '(' Expression ')' SwitchBlock
  
    ;

SwitchBlock: '{' SwitchBlockStatementGroups SwitchLabels '}'
  
    | '{' SwitchBlockStatementGroups '}'
    
    | '{' SwitchLabels '}'
  
    | '{' '}'
 
    ;

SwitchBlockStatementGroups: SwitchBlockStatementGroup
 
    | SwitchBlockStatementGroups SwitchBlockStatementGroup

    ;

SwitchBlockStatementGroup: SwitchLabels BlockStatements
 
    ;

SwitchLabels: SwitchLabel
  
    | SwitchLabels SwitchLabel
  
    ;

SwitchLabel: CASE ConstantExpression ':'
  
    | DEFAULT ':'
   
    ;

WhileStatement: WHILE '(' Expression ')' Statement
  
    ;

WhileStatementNoShortIf: WHILE '(' Expression ')' StatementNoShortIf
  
    ;

DoStatement: DO Statement WHILE '(' Expression ')' ';'
  
    ;

ForStatement: FOR '(' ForInit ';' Expression ';' ForUpdate ')' Statement
   
    | FOR '(' ForInit ';' Expression ';' ')' Statement
  
    | FOR '(' ForInit ';' ';' ForUpdate ')' Statement
   
    | FOR '(' ';' Expression ';' ForUpdate ')' Statement
   
    | FOR '(' ForInit ';' ';' ')' Statement
  
    | FOR '(' ';' Expression ';' ')' Statement
    
    | FOR '(' ';' ';' ForUpdate ')' Statement
    
    | FOR '(' ';' ';' ')' Statement
    
    ;

ForStatementNoShortIf: FOR '(' ForInit ';' Expression ';' ForUpdate ')' StatementNoShortIf
   
    | FOR '(' ForInit ';' Expression ';' ')' StatementNoShortIf
  
    | FOR '(' ForInit ';' ';' ForUpdate ')' StatementNoShortIf
  
    | FOR '(' ';' Expression ';' ForUpdate ')' StatementNoShortIf
  
    | FOR '(' ForInit ';' ';' ')' StatementNoShortIf
  
    | FOR '(' ';' Expression ';' ')' StatementNoShortIf

    | FOR '(' ';' ';' ForUpdate ')' StatementNoShortIf
   
    | FOR '(' ';' ';' ')' StatementNoShortIf
  
    ;
    
ForInit: StatementExpressionList
 
    | LocalVariableDeclaration
   
    ;

ForUpdate: StatementExpressionList
 
    ;

StatementExpressionList: StatementExpression
  
    | StatementExpressionList ',' StatementExpression
  
    ;

BreakStatement: BREAK IDENTIFIER ';'
 
    | BREAK ';'
 
    ;

ContinueStatement: CONTINUE IDENTIFIER ';'
  
    | CONTINUE ';'
   
    ;

ReturnStatement: RETURN Expression ';'

    | RETURN ';'
   
    ;

ThrowStatement: THROW Expression ';'
  
    ;

SynchronizedStatement: SYNCHRONIZED '(' Expression ')' Block
   
    ;

TryStatement: TRY Block Catches
   
    | TRY Block Catches Finally
   
    | TRY Block Finally
    
    ;

Catches: CatchClause
   
    | Catches CatchClause

    ;

CatchClause: CATCH '(' FormalParameter ')' Block
 
    ;

Finally: FINALLY Block
  
    ;

Primary: PrimaryNoNewArray         {$$->temporary=$1->temporary;}
 
    | ArrayCreationExpression
 
    ;

PrimaryNoNewArray: 
    Literal                   {$$->temporary=$1->temporary; }
  
    | THIS
 
    | '(' Expression ')'
  
    | ClassInstanceCreationExpression

    | FieldAccess
  
    | MethodInvocation
 
    | ArrayAccess
 
    ;

ClassInstanceCreationExpression: NEW ClassType '(' ArgumentList ')'
  
    | NEW ClassType '(' ')'
    
    ;
    
ArgumentList: Expression {$$=$1;} | ArgumentList ',' Expression
   
    ;

ArrayCreationExpression: NEW PrimitiveType DimExprs Dims
   
    | NEW PrimitiveType DimExprs
 
    | NEW ClassOrInterfaceType DimExprs Dims

    | NEW ClassOrInterfaceType DimExprs

    ;

DimExprs: DimExpr
  
    | DimExprs DimExpr
 
    ;

DimExpr: '[' Expression ']'
 
    ;

Dims: '[' ']'
  
    | Dims '[' ']'
  
    ;

FieldAccess: Primary '.' IDENTIFIER
 
    | SUPER '.' IDENTIFIER
     ;

MethodInvocation: Name '(' ArgumentList ')'
  
    | Name '(' ')'
   
    | Primary '.' IDENTIFIER '(' ArgumentList ')'
   
    | Primary '.' IDENTIFIER '(' ')'
   
    | SUPER '.' IDENTIFIER '(' ArgumentList ')'
  
    | SUPER '.' IDENTIFIER '(' ')'
  
    ;

ArrayAccess: Name '[' Expression ']'
   
    | PrimaryNoNewArray '[' Expression ']'
 
    ;

PostfixExpression: Primary       {$$->temporary=$1->temporary;}
 
    | Name
   
    | PostIncrementExpression
 
    | PostDecrementExpression
  
    ;

PostIncrementExpression: PostfixExpression INC
 
    ;

PostDecrementExpression: PostfixExpression DEC
  
    ;

UnaryExpression: PreIncrementExpression
  
    | PreDecrementExpression {$$->temporary=$1->temporary; }
   
    | '+' UnaryExpression              {$$->temporary=$1->temporary; }
 
    | '-' UnaryExpression {$$->temporary=$1->temporary; }
   
    | UnaryExpressionNotPlusMinus     {$$->temporary=$1->temporary;}

    ;

PreIncrementExpression: INC UnaryExpression
 
    ;

PreDecrementExpression: DEC UnaryExpression
    
    ;

UnaryExpressionNotPlusMinus: PostfixExpression    {$$->temporary=$1->temporary; }
  
    | '~' UnaryExpression
  
    | '!' UnaryExpression
  
    | CastExpression   
  
    ;

CastExpression: '(' PrimitiveType Dims')' UnaryExpression
  
    | '(' PrimitiveType ')' UnaryExpression { emit("",$3->temporary,"",$1->label,-1); }
  
    | '(' Expression ')' UnaryExpressionNotPlusMinus { emit("",$3->temporary,"",$1->label,-1); }
 
    | '(' Name Dims ')' UnaryExpressionNotPlusMinus { emit("",$3->temporary,"",$1->label,-1); }

    ;

MultiplicativeExpression: UnaryExpression         {$$->temporary=$1->temporary;}
  
    | MultiplicativeExpression '*' UnaryExpression { emit("",$3->temporary,"",$1->label,-1); }
   
    | MultiplicativeExpression '/' UnaryExpression { emit("",$3->temporary,"",$1->label,-1); }
  
    | MultiplicativeExpression '%' UnaryExpression { emit("",$3->temporary,"",$1->label,-1); }
   
    ;

AdditiveExpression: MultiplicativeExpression            {$$->temporary=$1->temporary;}
  
    | AdditiveExpression '+' MultiplicativeExpression     { emit("",$3->temporary,"",$1->label,-1); }
  
    | AdditiveExpression '-' MultiplicativeExpression       { emit("",$3->temporary,"",$1->label,-1); }
   
    ;

ShiftExpression: AdditiveExpression              {$$->temporary=$1->temporary; }
 
    | ShiftExpression LSHIFT AdditiveExpression { emit("",$3->temporary,"",$1->label,-1); }
  
    | ShiftExpression RSHIFT AdditiveExpression { emit("",$3->temporary,"",$1->label,-1); }
   
    | ShiftExpression LOGICAL_RSHIFT AdditiveExpression { emit("",$3->temporary,"",$1->label,-1); }
 
    ;

RelationalExpression: ShiftExpression            {$$->temporary=$1->temporary;}
  
    | RelationalExpression '<' ShiftExpression { emit("",$3->temporary,"",$1->label,-1); }
   
    | RelationalExpression '>' ShiftExpression { emit("",$3->temporary,"",$1->label,-1); }
 
    | RelationalExpression LTEQ ShiftExpression { emit("",$3->temporary,"",$1->label,-1); }
  
    | RelationalExpression GTEQ ShiftExpression { emit("",$3->temporary,"",$1->label,-1); }
  
    | RelationalExpression INSTANCEOF ReferenceType { emit("",$3->temporary,"",$1->label,-1); }
  
    ;

EqualityExpression: RelationalExpression           {$$->temporary=$1->temporary;}
  
    | EqualityExpression EQ RelationalExpression
 
    | EqualityExpression NE RelationalExpression
   
    ;

AndExpression: EqualityExpression                {$$->temporary=$1->temporary;}
  
    | AndExpression '&' EqualityExpression
 
    ;

ExclusiveOrExpression: AndExpression              {$$->temporary=$1->temporary;}
    | ExclusiveOrExpression '^' AndExpression
 
    ;

InclusiveOrExpression: ExclusiveOrExpression        {$$->temporary=$1->temporary;}
  
    | InclusiveOrExpression '|' ExclusiveOrExpression
     ;

ConditionalAndExpression: InclusiveOrExpression         {$$->temporary=$1->temporary;}

    | ConditionalAndExpression AND InclusiveOrExpression
  
    ;

ConditionalOrExpression: ConditionalAndExpression       {$$->temporary=$1->temporary;}
 
    | ConditionalOrExpression OR ConditionalAndExpression
 
    ;

ConditionalExpression: ConditionalOrExpression          {$$->temporary=$1->temporary; }
   
    | ConditionalOrExpression '?' Expression ':' ConditionalExpression
  
    ;

AssignmentExpression: ConditionalExpression    {$$->temporary=$1->temporary;}
 
    | Assignment    {$$->temporary=$1->temporary;  }

    ;

Assignment: LeftHandSide AssignmentOperator AssignmentExpression {     cout<< $1->label<<" "<<$2->label<<" "<< $3->label;
                                                                        string check=$2->label;
                                    
                                                                        if(check=="="){

                                                                        emit("",$1->label,"",$3->temporary,-1);
                                                                            }}
 
    ;

LeftHandSide: Name 
 
    | FieldAccess
 
    | ArrayAccess
  
    ;

AssignmentOperator: '='              
   
    | MULT_ASSIGN.       {$$->temporary=$1->temporary;  }
  
    | DIV_ASSIGN           {$$->temporary=$1->temporary;  }
  
    | MOD_ASSIGN.          {$$->temporary=$1->temporary;  }
  
    | ADD_ASSIGN       {$$->temporary=$1->temporary;  }
  
    | SUB_ASSIGN       {$$->temporary=$1->temporary;  }
 
    | LSHIFT_ASSIGN       {$$->temporary=$1->temporary;  }
 
    | RSHIFT_ASSIGN       {$$->temporary=$1->temporary;  }
 
    | LOGICAL_RSHIFT_ASSIGN       {$$->temporary=$1->temporary;  }
 
    | BIT_AND_ASSIGN       {$$->temporary=$1->temporary;  }
  
    | EXPO_ASSIGN       {$$->temporary=$1->temporary;  }
   
    | BIT_OR_ASSIGN       {$$->temporary=$1->temporary;  }
   
    ;

Expression: AssignmentExpression    {$$->temporary=$1->temporary; }
  
    ;

ConstantExpression: Expression
  
    ;
%%
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



