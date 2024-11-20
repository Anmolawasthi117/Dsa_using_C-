#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void displayrev(Node*tail){
    Node*temp = tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    display(a);
    displayrev(d);
    return 0;
};