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
void elementOfNthLevel(TreeNode* root,int n){
    if(root==NULL){
        return;
    }
    if(n==1){
        cout<<root->val<<" ";
        return;
    }
    elementOfNthLevel(root->left,n-1);
    elementOfNthLevel(root->right,n-1);
}
void preorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
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
    TreeNode* a=new TreeNode(1);
    TreeNode* b=new TreeNode(2);
    TreeNode* c=new TreeNode(3);
    TreeNode* d=new TreeNode(4);
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
    elementOfNthLevel(a, 3);
   
    return 0;
};
