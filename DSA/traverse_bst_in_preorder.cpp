#include<iostream>
using namespace std;
struct tree {
    int data;
    struct tree *left, *right;
};
tree* newNode(int data)
{
    tree* temp = new tree;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void printInorder(struct tree* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
 
/* Driver code*/
int main()
{
    struct tree* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
 
      // Function call
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
 
 
    return 0;
}