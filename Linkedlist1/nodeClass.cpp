#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Node{ // a linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
}
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming a linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    return 0;
};