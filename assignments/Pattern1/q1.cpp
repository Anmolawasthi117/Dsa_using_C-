#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows and column: ";
    cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " "<<i<<" ";
        }

        cout << endl;
    }

    return 0;
};