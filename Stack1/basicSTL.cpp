#include<iostream>
#include<vector>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    cout<<st.size()<<endl;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(50);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack<int> temp;
    while(!st.empty()){
        cout<<st.top()<<" "; // for reverse order
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(!temp.empty()){
        cout<<temp.top()<<" ";  //for normal order
        temp.pop();
    }
    return 0;
};