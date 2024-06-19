#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er&&sc==ec) return 1;
    int right = maze(sr,sc+1,er,ec);
    int down = maze(sr+1,sc,er,ec);
    return right+down;
}
int maze2(int row,int col){
    if(row<1||col<1) return 0;
    if(row == 1 && col == 1) return 1;
    int right = maze2(row,col-1);
    int down = maze2(row-1,col);
    return right+down;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec) return ;
    if(sr==er&&sc==ec){
        cout<<s<<endl;   
        return ;
    } 
     printpath(sr,sc+1,er,ec,s+"R");
    printpath(sr+1,sc,er,ec,s+"D");
}

int main(){
   
 printpath(0,0,2,2,"");
 cout<<maze2(4,4);

    return 0;
};