#include "bits/stdc++.h"
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search( int inorder[] , int start , int end , int curr){
    for(int i=start ; i>=end; i--){
        if(inorder[i] == curr) return i;
    }
    return -1;
}

node* buildTree(int postorde[] , int inorder[] , int start, int end){
    static int index=start;
    if(start < end) return NULL;
    int curr = postorde[index];
    index--;

    node* root = new node(curr);

    if(start == end) return root;
    int pos = search(inorder,start,end ,curr);

    root->right = buildTree(postorde,inorder,start,pos+1);
    root->left = buildTree(postorde,inorder,pos-1,end );

    return root;
};

void inorderbuild(node* root){
    if(root == NULL) return ;
    inorderbuild(root->left);
    cout<<root->data<<" ";
    inorderbuild(root->right);
}

int main(){
    //struct node* root = new node(1);

    int postorder[] = { 4, 5, 2, 6, 7, 3, 1 };
    int inorder[] = { 4, 2, 5, 1, 6, 3, 7};

    node* root = buildTree( postorder,  inorder ,6,0);

    inorderbuild(root);
}