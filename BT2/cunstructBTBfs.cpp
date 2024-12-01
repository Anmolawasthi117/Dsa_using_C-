#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    Treenode* construct(vector<int> arr){
        vector<TreeNode*> nodes;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == -1){
                nodes.push_back(NULL);
            }
            else{
                nodes.push_back(new TreeNode(arr[i]));
            }
        }
        int leftIndex = 0;
        int rightIndex = 1;
        for(int i = 0; i < nodes.size(); i++){
            if(nodes[i] != NULL){
                nodes[i]->left = nodes[leftIndex];
                nodes[i]->right = nodes[rightIndex];
                leftIndex = rightIndex + 1;
                rightIndex = leftIndex + 1;
            }
        }
        return nodes[0];
    }
};  
void queueLevelOrder(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){
    vecotor<int> arr{1,2,3,-1,-1,4,-1,-1,5,-1,6,-1,-1};
    TreeNode* root = root->construct(arr);
    
    return 0;
};