#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(45);
    pq.push(12);
    pq.push(1);
    cout<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int> > pqm;
    pqm.push(10);
    pqm.push(45);
    pqm.push(12);
    pqm.push(1);
    cout<<pqm.top()<<endl;
    return 0;
};