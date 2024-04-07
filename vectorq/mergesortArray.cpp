#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector <int > v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector <int > merg(vector <int >& v1, vector <int > &v2){
    int n = v1.size();
    int m = v2.size();
    vector <int > v3(n+m);
    int i = 0;
    int j = 0;
    int k = 0;
 while(i <= n-1 && j <= m-1){
    if(v1[i] < v2[j]){
        v3[k] = v1[i];
        
        i++;
    }
    else{
        v3[k] = v2[j];
        
        j++;
    }
    k++;
 }
    if(i == n){
        while(j <=m-1){
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    if(j == m){
        while(i <= n-1){
            v3[k] = v1[i];
            i++;
            k++;
        }
    }
    return v3;
}
int main(){
    vector <int > v1;
    v1.push_back(10);
    v1.push_back(2);
    v1.push_back(30);
    v1.push_back(4);
    v1.push_back(50);

    vector <int > v2;
    v2.push_back(20);
    v2.push_back(40);
    v2.push_back(6);
    v2.push_back(70);
    v2.push_back(8);

    vector <int > v3 = merg(v1,v2);
    display(v3);
    return 0;
};