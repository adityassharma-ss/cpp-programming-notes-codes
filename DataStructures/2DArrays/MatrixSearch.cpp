// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row_size,col_size;
    //Get size of matrix
    cout<<"Enter the row Size Of the Matrix:";
    cin>>row_size;
    cout<<"Enter the columns Size Of the Matrix:";
    cin>>col_size;

    int matrix[row_size][col_size];

    //Taking input of the matrix
    int i,j;
    cout<<"Enter the Matrix Element:\n";
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            cin>>matrix[i][j];
        }
    }

     //Take input of search Element
    int Search_ele;
    printf("Enter the search element:");
    scanf("%d",&Search_ele);

   //Compute the position of the search Element
    int flag=0, row, col;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            if(matrix[i][j]==Search_ele)
        {
            flag=1;
            row=i;
            col=j;
        }
        }
    }
    //Display position of the search Element
    if(flag==1)
        printf("Position of Search Element %d is (%d, %d)",Search_ele,row,col);
    else
        printf("Given Search Element is not found....");
}

//Optimised approach

// int32_t main() {
// int n, m; cin >> n >> m;
// int target; cin >> target;
// int mat[n][m];
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < m; j++) {
// cin >> mat[i][j];
// }
// }
// bool found = false;
// int r = 0, c = n - 1;
// while (r < m && c >= 0) {
// if (mat[r][c] == target) {
// found = true;
// }
// mat[r][c] > target ? c-- : r++;
// }
// if (found)
// cout << "Found";
// else
// cout << "Not Found";
// }

// brute force approach

// int main() {
// int n, m; cin >> n >> m;
// int target; cin >> target;
// int mat[n][m];
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < m; j++) {
// cin >> mat[i][j];
// }
// }
// bool found = false;
// for (int i = 0; i < n; i++) {
// for (int j = 0; j < m; j++) {
// if (mat[i][j] == target)
// found = true;
// }
// }
// if (found)
// cout << "Found";
// else
// cout << "Not Found";
// }