#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int topElement = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(topElement);
}
void pushAtAnyIndx(stack<int> &s, int val, int indx){
    if(indx == 0){
        s.push(val);
        return;
    }
    int topElement = s.top();
    s.pop();
    pushAtAnyIndx(s, val, indx-1);
    s.push(topElement);
}
void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
void displayrec(stack<int> s){
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    displayrec(s); 
    cout<<x<<endl;
    s.push(x); 
}
void reverse(stack<int> &s){
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, x);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    pushAtBottom(s, 5);
    pushAtAnyIndx(s, 6, 2);
    displayrec(s);
    reverse(s);
    displayrec(s);
    return 0;
};