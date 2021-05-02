#include <iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode *insert(BSTNode *root,int data);
bool search(BSTNode *root, int data);

int main(void)
{
    BSTNode *root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 25);
}

BSTNode *getNewNode(int data)
{
    BSTNode *new_node = new BSTNode();
    new_node->data = data;
    new_node->left = new_node->right = NULL;

    return new_node;
}

BSTNode *insert(BSTNode *root, int data)
{
    if (root == NULL)
    {
	root = getNewNode(data);

    }
    else if (data <= root->data)
    {
	root->left = insert(root->left, data);
    }
    else
    {
	root->right = insert(root->right, data);
    }
    return root;    
}


bool search(BSTNode *root, int data)
{
    if (root == NULL) return false;
    else if (data == root->data)
    {
	return true;
    }
    else if (data <= root->data)
    {
	return search(root->left, data);
    }
    else
    {
	return search(root->right, data);
    }
}

