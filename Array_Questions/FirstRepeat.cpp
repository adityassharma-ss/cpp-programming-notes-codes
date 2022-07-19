#include <bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n){

    unordered_map<int, int> um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(um[arr[i]] > 1)
        return i;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << firstRepeated(arr,n) << endl;
}