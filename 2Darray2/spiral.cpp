#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int m;
    cout << "Enter the number of rows in the matrix:" ;
            cin >>
        m;
    int n;
    cout << "Enter the number of columns in the matrix: ";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is:" << endl;
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int minr= 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    for(int i=0;i<m;i++){
        // right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[i][j]<<" ";
        }
        minr++;
        // down
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc]<<" ";
        }
        maxc--;
        // left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        // up
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc]<<" ";
        }
        minc++;
        

    }
    return 0;
};