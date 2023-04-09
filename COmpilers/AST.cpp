#include<bits/stdc++.h>
#include "3ac.cpp"
using namespace std;





struct ast_node* create_node(string type, struct ast_node* c1, struct ast_node* c2, struct ast_node* c3, struct ast_node* c4, struct ast_node* c5) {
    struct ast_node* node = (struct ast_node*) malloc(sizeof(struct ast_node));
    node->type = type;
    node->c1 = c1;
    node->c2 = c2;
    node->c3 = c3;
    node->c4 = c4;
    node->c5 = c5;
    return node;
}

// Generate a DOT script for the AST rooted at `node`
void generate_dot_script(FILE* fp, struct ast_node* node) {
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

void free_ast(struct ast_node* node) {
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