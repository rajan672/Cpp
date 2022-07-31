#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printLevelnode(node* root){
    // Base Case
    if(root == NULL) return ;

    // Create an empty queue for level order traversal
    queue<node*> q;
    // Enqueue Root and initialize height
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        // Print front of queue and remove it from queue
        node* root = q.front();
        q.pop();
        if(root != NULL){
            cout<<root->data<<" ";
            /* Enqueue left child */
            if(root -> left) q.push(root->left);
            /*Enqueue right child */
            if(root ->right) q.push(root->right);
        } else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root ->left -> left = new node(4);
    root ->left ->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    printLevelnode(root);
}


/* 
Time Complexity: O(n) where n is the number of nodes in the binary tree 
Space Complexity: O(n) where n is the number of nodes in the binary tree 
*/