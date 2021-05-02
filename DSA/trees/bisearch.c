#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}bstNode;

bstNode *rootPtr = NULL;

void insert(int data);

int main(void)
{

    int i;
    for (i = 1; i <= 10; i++)
    {
	insert(&rootPtr, (i*10));
    }
}


bstNode *createNode(int data)
{
    bstNode *new_node = malloc(sizeof(bstNode));
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}

void insert(bstNode **root, int data)
{
    if (*root == NULL)
    {
	root = createNode(data);
    }
    else if (data < root->data)
    {
	insert(data);
    }
}
