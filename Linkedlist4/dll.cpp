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
class DoublyLinkedList{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next; 
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }
    void getAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index";
        else if(idx==0) cout<<head->val;
        else if(idx==size-1) cout<<tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            cout<<temp->val;
        }
    }
  void deleteAtHead(){
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
    void deleteAttail(){
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
   void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAttail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete temp;
            size--;
        }
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
    DoublyLinkedList dll ;
    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.display();
    dll.insertAtHead(40);
    dll.display();
    dll.insertAtIdx(2,50);
    dll.display();
    return 0;
};