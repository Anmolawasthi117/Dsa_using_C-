#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    stack<int> rst;
    while(!temp.empty()){
        rst.push(temp.top());
        temp.pop();
    }
    while(!rst.empty()){
        st.push(rst.top());
        rst.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
};