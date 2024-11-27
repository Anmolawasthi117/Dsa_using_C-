#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
}
void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q;
    // push
    //pop
    //front -> top in stack
    //size
    //empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.back()<<endl;
    display(q);
    cout<<endl;
    reverse(q);
    display(q);
    return 0;
};