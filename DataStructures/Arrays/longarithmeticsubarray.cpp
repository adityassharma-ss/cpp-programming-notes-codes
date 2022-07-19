// An Arithmetic subarray is a subarray that has 3 or more elements and the difference between consecutive   //elements is the same
// google kickstart question
// sample test case : 10 7 4 6 8 10 11
// longest consecutive : 4 6 8 10
// output : 4

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){

        cin >> arr[i];

    }
    int ans=2;
    int pd = arr[1]-arr[0];
    int j=2;
    int curr = 2;

    while(j<n){
        if(pd == arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout << ans << endl;
    return 0;
}



