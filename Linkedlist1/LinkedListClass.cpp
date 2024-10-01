#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
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
            size++;
        }
    }
    void intGetAtIdx(int idx){
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
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            delete tail;
            tail=temp;
            tail->next=NULL;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAttail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            Node* t=temp->next;
            temp->next=t->next;
            delete t;
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
    LinkedList ll ;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.display();
    cout<<ll.size<<endl;
    ll.intGetAtIdx(1);
    return 0;
};