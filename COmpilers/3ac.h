#include <bits/stdc++.h>
#include "header.h"
using namespace std;



typedef struct quadruple{
    string op;
    string arg1;
    string arg2;
    string res;
    int idx;
} quad;

void emit(string, string , string, string , int );
void backpatch(vector<int>& , int);
string newtemp(string );
void print3AC_code();