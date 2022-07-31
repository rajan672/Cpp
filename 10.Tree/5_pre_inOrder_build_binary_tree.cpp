#include<bits/stdc++.h>
using namespace std;

struct tree{
    int data;
    struct tree* left;
    struct tree* right;

    tree(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start , int end , int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i] == curr) return i;
    }
    return -1;
}

tree* buildTree(int preorder[] , int inorder[] , int start, int end){
    static int index=0;

    if(start>end) return NULL;

    int curr = preorder[index];
    index++;

    tree* root = new tree(curr);

    if(start == end) return root;
    int pos = search(inorder,start , end , curr);

    root->left = buildTree(preorder,inorder,start , pos-1);
    root->right= buildTree(preorder,inorder,pos+1, end);

    return root;
};

void inorderbuild(tree* root){
    if(root == NULL) return ;
    inorderbuild(root->left);
    cout<<root->data<<" ";
    inorderbuild(root->right);
}

int main(){
    /* struct tree* root = new tree(1);
    root->left = new tree(2);
    root-> right = new tree(3);

    root->left->left = new tree(4);
    root->left->right = new tree(5);

    root->right->left = new tree(6);
    root->right->right = new tree(7); */

    int preorder[] = { 1 ,2 ,4 ,5, 3, 6, 7 };
    int inorder[] = {4, 2, 5, 1, 6, 3, 7 };

    tree* root = buildTree(preorder,inorder,0,6);

    inorderbuild(root);

}