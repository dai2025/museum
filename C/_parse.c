// _parse.c
// tree:
//          +
//         / \
//        2   *
//           / \
//          3   -
//             / \
//            4   1 #include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "lexer.h" //

// 
typedef struct node {
    char op;
    int value;
    struct node* left;
    struct node* right;
} node;

//
node* parse_expression(token* tokens, int* index) {
    node* left = parse_term(tokens, index);

    while (tokens[*index].type == TOKEN_PLUS || tokens[*index].type == TOKEN_MINUS) {
        char op = tokens[*index].type;
        (*index)++;
        node* right = parse_term(tokens, index);
        node* parent = (node*)malloc(sizeof(node));
        parent->op = op;
        parent->left = left;
        parent->right = right;
        left = parent;
    }

    return left;
}

//
node* parse_term(token* tokens, int* index) {
    node* left = parse_factor(tokens, index);

    while (tokens[*index].type == TOKEN_TIMES || tokens[*index].type == TOKEN_DIVIDE) {
        char op = tokens[*index].type;
        (*index)++;
        node* right = parse_factor(tokens, index);
        node* parent = (node*)malloc(sizeof(node));
        parent->op = op;
        parent->left = left;
        parent->right = right;
        left = parent;
    }

    return left;
}

//
node* parse_factor(token* tokens, int* index) {
    if (tokens[*index].type == TOKEN_NUMBER) {
        int value = tokens[*
index].value;
(index)++;
node leaf = (node*)malloc(sizeof(node));
leaf->op = '\0';
leaf->value = value;
leaf->left = NULL;
leaf->right = NULL;
return leaf;
}
else if (tokens[*index].type == TOKEN_LPAREN) {
(index)++;
node expression = parse_expression(tokens, index);
if (tokens[*index].type != TOKEN_RPAREN) {
printf("Syntax Error: Expected ')' at index %d\n", *index);
exit(EXIT_FAILURE);
}
(*index)++;
return expression;
}
else {
printf("Syntax Error: Invalid token at index %d\n", *index);
exit(EXIT_FAILURE);
}
}

//
void print_tree(node* tree) {
if (tree != NULL) {
print_tree(tree->left);
print_tree(tree->right);
if (tree->op != '\0') {
printf("%c ", tree->op);
}
else {
printf("%d ", tree->value);
}
}
}

//
int main() {
char input[] = "3 + 4 * ( 5 - 2 )";
int input_len = sizeof(input) / sizeof(char);

int index = 0;
node* tree = parse_expression(tokens, &index); printf("Input: %s\n", input); printf("Tokens: "); print_tokens(tokens, num_tokens); printf("\n"); printf("Syntax Tree: "); print_tree(tree);
printf("\n");
free_tokens(tokens, num_tokens);
free_tree(tree);
} 
