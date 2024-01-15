#include <bits/stdc++.h>
using namespace std;
struct BST
{
    int val;
    BST *left;
    BST *right;
};
BST *insert(BST *root, int val)
{
    if (root == NULL)
    {
        BST *newroot = new BST;
        newroot->val = val;
        newroot->right = NULL;
        newroot->left = NULL;
        return newroot;
    }
    /*           7
              /    \
            4       11
           /  \    /
          1    6  8
    */
    if (root->val < val)
    {
        root->right = insert(root->right, val);
    }
    else if (root->val > val)
    {
        root->left = insert(root->left, val);
    }
    return root;
}
BST* search(BST *root, int val)
{
    if (root != NULL)
    {
        if (root->val == val)
        {
            return root;
        }
        else if (root->val < val)
        {
            return search(root->right, val);
        }
        else
        {
            return search(root->left, val);
        }
    }
    return root;
}
void look(BST *root)
{
    if (root != NULL)
    {
        look(root->left);
        cout << root->val << " ";
        look(root->right);
    }
}
BST *remove(BST *root, int val)
{
    if (root == NULL){
        return NULL;
    }
    BST* roots = search(root,val);
    if(roots!=NULL && roots->right == NULL && roots->left == NULL){
        roots = NULL;
    }
    return root;
}
int main()
{
    BST *root = NULL;
    root = insert(root, 4);
    insert(root, 7);
    insert(root, 11);
    insert(root, 6);
    insert(root, 1);
    insert(root, 8);

    look(root);
    //cout << search(root, 1);
    remove(root,1);
    cout<<'\n';
    look(root);

    return 0;
}