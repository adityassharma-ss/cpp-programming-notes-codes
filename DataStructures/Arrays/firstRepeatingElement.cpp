// Given an array arr[] of size N. The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest.

#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     const int N = 1e6+2; // 10 to the pow 6
//     int idx[N];
//     for(int i=0;i<n;i++){
//         idx[i] = -1;
//     }
//     int minidx = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[arr[i]] != -1){
//             minidx = min(minidx, idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]] = i;
//         }

//     }
//     if(minidx = INT_MAX){
//         cout << "-1" << endl;
//     }
//     else{
//         cout << minidx +1 << endl;

//     }


//     return 0;
// }


int Solution::solve(vector<int> &A) {
    
    vector<int> v(A);
    unordered_set<int> s;
    
    sort(A.begin(),A.end());
    int num,temp=0;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]==A[i+1]){
            num = A[i];temp=1;
            s.insert(num);
        }
    }
    if(temp==0){
        return -1;
    }
    
    for(int i=0;i<v.size();i++){
        if(s.find(v[i])!=s.end()){
            return v[i];
        }
    }
}
