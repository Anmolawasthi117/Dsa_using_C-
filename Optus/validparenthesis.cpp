#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool validparenthesis(string s){
    stack<char> st;
    for(char ch :s){
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }


}

int main(){
        string s = "()[]{}";
        bool ans = validparenthesis(s);
        cout<<ans;

    return 0;
};