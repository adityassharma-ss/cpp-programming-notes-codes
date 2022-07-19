#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currLen = 0, maxLen =0;
    int st=0; maxSt=0;

    while(1){
        currLen++;
        if(arr[i] == '\0')
        break;
        i++;
    }

    return 0;
}