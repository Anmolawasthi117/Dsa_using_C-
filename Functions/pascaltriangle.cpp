#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

float fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int com(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << com(i, j)<<" ";
        }
        cout << endl;
    }

    return 0;
};