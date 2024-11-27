#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int s){
        size=s;
        arr=new int[s];
        front=rear=-1;
    }
    void enqueue(int val){
        if(rear==size-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear]=val;
            if(front==-1){
                front++;
            }
        }
    }
    int dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int val=arr[front];
            arr[front]=-1;
            front++;
            if(front>rear){
                front=rear=-1;
            }
            return val;
        }
    }
    bool isEmpty(){
        if(front==-1 || front>rear){
            return true;
        }
        else{
            return false;
        }
    }
    int qfront(){
        if(front==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    void display(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    void push(){
        int val;
        cout<<"Enter the value to be pushed"<<endl;
        cin>>val;
        enqueue(val);
    }
    void pop(){
        int val=dequeue();
        if(val!=-1){
            cout<<"The value popped is "<<val<<endl;
        }
    }

}

int main(){
    
    return 0;
};