#include <bits/stdc++.h>
using namespace std;
class Tree
{
    public:
        int data;
        Tree* left = NULL,*right = NULL;
        Tree(int x) 
        {
            data = x;
            left = NULL;
            right = NULL;
        }
};
void inorder_traversal (Tree *root) 
{
    if (root == NULL) return;
   
    inorder_traversal(root -> left);
    
    cout << root -> data << ” “;
    
    inorder_traversal(root -> right);
}
int main() 
{
    Tree *root = new Tree(15);
    root -> left = new Tree(12);
    root -> right = new Tree(54);
    root -> left -> left = new Tree(8);
    root -> left -> right = new Tree(13);
    root -> left -> left -> left = new Tree(5);
    root -> right -> left = new Tree(18);
    inorder_traversal(root);
    return 0;
}
