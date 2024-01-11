#include <bits/stdc++.h>
using namespace std;
struct BST
{
    int val;
    struct BST *right;
    struct BST *left;
};
struct BST *root = NULL;
struct BST* createBST(int val)
{
    struct BST *newBST = new BST;
    // if (root == NULL)
    // {
        //root = newBST;
        newBST->val = val;
        newBST->right = NULL;
        newBST->left = NULL;
        return newBST;
    //}
    // BST *cur = root;
    // while (cur != NULL)
    // {
    //     if (cur->val >= val)
    //     {
    //         cur = cur->right;
    //     }
    //     else
    //     {
    //         cur = cur->left;
    //     }
    // }

}
void preorder(struct BST *p){
    if(p != NULL){
        cout<< p->val<<' ';
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(struct BST *p){
    if(p != NULL){
        inorder(p->left);
        cout<< p->val<<' ';
        inorder(p->right);
    }
}
void postorder(BST *p) {
    if(p != NULL){
        postorder(p->left);
        postorder(p->right);
        cout<< p->val<<' ';
    }
}

int main()
{
    BST* p =createBST(5);                
    BST* p1 =createBST(3);               
    BST* p2 =createBST(1);
    BST* p3 =createBST(6);
    BST* p4 =createBST(2);
    /*         5
              / \
             3   1
            / \ 
           6   2
    */

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    preorder(p);
    cout<<'\n';
    inorder(p);
    cout<<'\n';
    postorder(p);
}