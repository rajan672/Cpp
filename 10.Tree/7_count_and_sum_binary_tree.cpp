#include "bits/stdc++.h"
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left= NULL;
        right = NULL;
    }
};

int count(node* root){
    if(root == NULL) return 0;
    return count(root->left) + count(root->right) + 1;
}

int sumNode(node* root){
    if(root == NULL) return 0;
    return sumNode(root->left) + sumNode(root->right) + root->data;
}

int main(){
    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left =new node(4);
    root->left->right = new node(5);

    root->right->left  = new node(6);
    root->right->right = new node(7);

    cout<<count(root)<<endl;
    cout<<sumNode(root)<<endl;
}