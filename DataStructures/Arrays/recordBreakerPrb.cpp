// google kickstart question
// sample test case : 1 2 0 7 2 0 2 2
// output : 2

// A brute force approach is an approach that finds all the possible solutions to find a satisfactory solution to a given problem. The brute force algorithm tries out all the possibilities till a satisfactory solution is not found.

// optimised approach for this problem // time-complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    arr[n] = -1;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << "1" << endl;

        return 0;
    }
    int ans =0;
    int mx = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx, arr[i]);
    }

    cout << ans << endl;
    return 0;
}