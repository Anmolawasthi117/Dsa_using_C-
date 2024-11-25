#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return head==NULL;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main(){
    
    return 0;
};