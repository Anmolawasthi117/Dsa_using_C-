#include<iostream>
#include<vector>
#include<queue>
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
int level(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(level(root->left), level(root->right));
}
void elementOfNthLevel(TreeNode* root,int curr,int level){
    if(root==NULL){
        return;
    }
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    elementOfNthLevel(root->left,curr+1,level);
    elementOfNthLevel(root->right,curr+1,level);
}
 void NthlevelRev(TreeNode* root,int curr,int level){
    if(root==NULL){
        return;
    }
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    NthlevelRev(root->right, curr+1, level);
    NthlevelRev(root->left, curr+1, level);
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
void levelOrder(TreeNode* root){
    int n = level(root);
    for(int i=1; i<=n; i++){
        elementOfNthLevel(root, 1, i);
        cout<<endl;
    }
}
void RevlevelOrder(TreeNode* root){
    int n = level(root);
    for(int i=1; i<=n; i++){
        NthlevelRev(root, 1, i);
        cout<<endl;
    }
}
void queueLeveOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->val<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
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
    TreeNode* i=new TreeNode(9);
    TreeNode* j=new TreeNode(10);
    TreeNode* k=new TreeNode(11);
    TreeNode* l=new TreeNode(12);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    d->right=i;
    e->left=j;
    e->right=k;
    f->left=l;
    levelOrder(a);
    cout<<endl;
    RevlevelOrder(a);

    return 0;
};
