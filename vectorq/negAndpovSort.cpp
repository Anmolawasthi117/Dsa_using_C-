#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] <1)
        {
            i++;
        }
        else if (v[j] > 1)
        {
            j--;
        }
        else
        {
            swap(v[i], v[j]);
        }
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(-65);
    v.push_back(1);
    v.push_back(45);
    v.push_back(21);
    v.push_back(-3);
    v.push_back(12);
    v.push_back(4);
    v.push_back(-98);
    display(v);
    sort(v);
    display(v);
    return 0;
};