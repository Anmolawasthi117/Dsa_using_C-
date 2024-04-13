#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int matrixscore(<vector <int>>& grid){
    int rows = grid.size();
    int cols = grid[0].size();

    for(int i=0;i<rows;i++){
        if(grid[i][0]==0){
            for(int j=0;j<cols;j++){
                if (grid[i][j]== 0){
                    grid[i][j]=1;
                }
                else{
                    grid[i][j]=0;
                }
            }
        }
    }
    for(int j=0;j<cols;j++){
        int noz = 0;
        int noo = 0;
        for(int i=0;i<rows;i++){
            if(grid[i][j]==0){
                noz++;
            }
            else{
                noo++;
            }
            if(noz>noo){
                for(int k=0;k<rows;k++){
                    if(grid[k][j]==0){
                        grid[k][j]=1;
                    }
                    else{
                        grid[k][j]=0;
                    }
                }
            }
        }
    }
    int sum = 0;
    for(int i=0;i<rows;i++){
        int x = 1;
      for(int j = cols-1;j>=0;j--){
          sum += x*grid[i][j];
          x *= 2;
      }
    }

}

int main(){
    return 0;
};