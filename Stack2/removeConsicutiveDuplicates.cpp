#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>

using namespace std;
string removeConsicutiveDuplicate(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top())st.push(s[i]);
    }
    s = "";
        while(!st.empty()){
            s = st.top()+s;
            st.pop();
        }
    return s;
}

int main(){
     string s ="abbdbaaaccd";
     cout<<s<<endl;
   s = removeConsicutiveDuplicate(s);
    cout<<s<<endl;
    return 0;
};