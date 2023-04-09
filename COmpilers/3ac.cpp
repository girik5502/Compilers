#include <fstream>
#include "3ac.h"

using namespace std;


vector<quad> code; 

long long counter = 0;

void emit(string op, string arg1, string arg2, string  res, int idx){
    quad temp;
    temp.op = op;
    temp.arg1 = arg1;
    temp.arg2 = arg2;
    temp.res = res;
    temp.idx = idx;
    if(idx == -1) temp.idx = code.size();
    code.push_back(temp);
}

void backpatch(vector<int>& bplist, int target){
    for(int i=0;i<bplist.size(); i++){
        code[bplist[i]].idx = target;
    }
}

string newtemp(){
    // creating temp variables
    string temp_var = "#V"+to_string(counter);
    counter++;
    return temp_var;
}


void print3AC_code(){
    ofstream tac_file;
    tac_file.open("intermediate_3ac.csv");
    for(int i=0;i<code.size(); i++){
        if(code[i].op==""){
        	cout<<"high";
        	tac_file<<code[i].res<<" = "<<code[i].arg1<<endl;
        }
    }
}

//struct ast_node* create_node(string type, struct ast_node* c1,struct  ast_node* c2,struct  ast_node* c3, struct ast_node* c4,struct  ast_node* c5) ;
//void generate_dot_script(FILE* fp, struct ast_node* node);
//void free_ast(struct ast_node* node);
void yyerror (string msg);