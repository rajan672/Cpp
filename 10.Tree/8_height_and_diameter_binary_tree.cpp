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

//Time Complexity: O(n)
int height(node* root){
    if(root == NULL) return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight,rheight)+1;
}

//Time complexity: O(n)  
int diameter(node* root){
    if(root == NULL) return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currdiameter = lheight + rheight +1;

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);

    return max(currdiameter, max(ldiameter,rdiameter));
}

int main(){
    node* root = new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left =new node(4);
    root->left->right = new node(5);

    root->right->left  = new node(6);
    root->right->right = new node(7);

    cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;
}