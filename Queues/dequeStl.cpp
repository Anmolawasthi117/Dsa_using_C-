#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
void Display(deque<int> &dq){
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    Display(dq);
    dq.pop_front();
    Display(dq);
    dq.push_front(50);
    Display(dq);
    dq.pop_back();
    Display(dq);
    return 0;
};