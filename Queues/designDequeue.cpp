#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Dequeue{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    Dequeue(){
        head=tail=NULL;
        size=0;
    }
    void pushBack(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void pushFront(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
   
   
  void popFront(){
        if(size==0) cout<<"List is empty";
        else if(size==1){
            delete head;
            head=tail=NULL;
            size--;
        }
        else{
            Node* temp=head;
            head=head->next;
            head->prev=NULL;
            delete temp;
            size--;
        }
    }
    void popBack(){
        if(size==0) cout<<"List is empty";
        else if(size==1){
            delete head;
            head=tail=NULL;
            size--;
        }
        else{
            Node* temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete temp;
            size--;
        }
    }
    int getFront(){
        if(size==0){
            cout<<"List is empty";
            return -1;
        }
        return head->val;
    }
    int getBack(){
        if(size==0){
            cout<<"List is empty";
            return -1;
        }
        return tail->val;
    }
   void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
   Dequeue dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.display();
    dq.popBack();
    dq.display();
    return 0;
};