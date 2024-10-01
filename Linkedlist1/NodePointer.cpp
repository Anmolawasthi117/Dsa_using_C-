#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void displayrec(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void size(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    cout<<cnt;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
   display(a);
   cout<<endl;
   size(a);
   cout<<endl;
   displayrec(a);
    return 0;
};