#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{//this is a tree node class
    public:
    int val;
    TreeNode* next;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int val){
        this->val=val;
        this->next=NULL;
        this->right=NULL;
        this->left=NULL;
    }
};
void inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void display(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int main(){
    TreeNode* a=new TreeNode(10);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(40);
    TreeNode* e=new TreeNode(5);
    TreeNode* f=new TreeNode(6);
    TreeNode* g=new TreeNode(7);
    TreeNode* h=new TreeNode(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    display(a);
    cout<<endl;
    inorder(a);
   
    return 0;
};
