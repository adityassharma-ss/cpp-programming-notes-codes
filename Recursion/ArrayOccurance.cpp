#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;

    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr, n, i+1, key);
}

int main(){
    int n,i,key;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> i >> key;
    cout<< firstOcc(arr,n,i,key);
}