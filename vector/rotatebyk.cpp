#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void rev(int i,int j,vector<int> &v)
{

    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }
    display(v);
    
    int k ;
    cin >> k;
    if(k>n){
        k = k%n;
    }
    
    rev(0,k-1,v);
    rev(k, n-1, v);
    rev(0, n-1, v);
    display(v);
    return 0;
};