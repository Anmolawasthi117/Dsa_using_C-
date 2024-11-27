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
class Queue{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
};
int main(){
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.display();
  cout<<q.front()<<endl;
  cout<<q.back()<<endl;
  q.pop();
  q.display();
    return 0;
};