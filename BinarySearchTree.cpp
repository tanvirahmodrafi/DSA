#include <bits/stdc++.h>
using namespace std;
struct BST{
    int val;
    struct BST* right;
    struct BST* left;
};

struct BST *createBST(struct BST *root, int val)
{
    if (root == NULL)
    {
        BST *temp = new BST;
        temp->val = val;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (root->val > val)
    {
        root->left = createBST(root->left, val);
    }
    else if (root->val < val)
    {
        root->right = createBST(root->right, val);
    }
    return root;
}

void preorder(struct BST *p)
{
    if (p != NULL)
    {
        cout << p->val << ' ';
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(struct BST *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        cout << p->val << ' ';
        inorder(p->right);
    }
}

void postorder(BST *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout << p->val << ' ';
    }
}

bool isBST(struct BST *root)
{
    static struct BST *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return false;
        }
        if (prev != NULL && root->val <= prev->val)
        {
            return false;
        }
        prev = root;
        return isBST(root->right);
    }
    return true;
}

int main()
{
    BST *p =NULL;
    createBST(p, 7);
    p = createBST(p, 4);
    p = createBST(p, 11);
    p = createBST(p, 1);
    p = createBST(p, 6);
    /*         7
              / \
             4   11
            / \
           1   6
    */

    preorder(p);
    cout << '\n';
    inorder(p);
    cout << '\n';
    postorder(p);
    if (isBST(p))
    {
        cout << "BST";
    }
    else
    {
        cout << " Not BST";
    }
}