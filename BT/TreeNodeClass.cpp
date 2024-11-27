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
void display(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return root->val+sum(root->left)+sum(root->right);
}
int prod(TreeNode* root){
    if(root==NULL){
        return 1;
    }
    return root->val*prod(root->left)*prod(root->right);
}
int size(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return 1+size(root->left)+size(root->right);
}
int Max_Node(TreeNode* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(Max_Node(root->left),Max_Node(root->right)));
}
int Min_Node(TreeNode* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(Min_Node(root->left),Min_Node(root->right)));
}
int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
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
    cout<<sum(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<Max_Node(a);
    cout<<endl;
    cout<<prod(a);
    cout<<endl;
    cout<<Min_Node(a);
    cout<<endl;
    cout<<level(a);
    return 0;
};