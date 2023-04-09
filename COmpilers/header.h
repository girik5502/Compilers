#include <bits/stdc++.h>
using namespace std;

 struct ast_node {
    string type;
    string label;
    int i;
    long l;
    float f;
    double d;
    char c;
    char* str;
    int instruction_number;
    string temporary;
    vector<int> true_list;
    vector <int> false_list;
    vector <int> new_list;
} ;

