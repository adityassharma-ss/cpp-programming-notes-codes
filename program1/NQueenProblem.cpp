// You have to place n queens on an nxn chessboard.
// Idea: Try all the possible positions for the queen. isSafe functions check whether
// the current position is safe or not.

#include <bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,int x, int y, int n){
    for(int row=0;row<n;row++){
        if(arr[row][y] == 1){
            return 0;
        }
    }
    int row = x;
    int col = y;
    while(row >=0 && col >=0){
        if(arr[row][col] == 1){
            return 0;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while(row >=0 && col < n){
        if(arr[row][col] == 1){
            return 0;
        }
        row--;
        col--;
    }
    return 1;
}

bool nQueen(int** arr,int x, int n){
    if(x>=n){
        return 1;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col] =1;

            if(nQueen(arr,x+1,n)){
                return true;
            }
            arr[x][col];
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << arr[i][j] << endl;
            }
            cout << endl;
        }
    }
    return 0;


}

