// Maximum Circular Sub Array
// Approach : Max Sub Array = Total Sum of Array - sum of min-subarray sum

#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){

    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum = max(maxSum, currSum);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum = totalSum + kadane(arr, n);

    cout << max(wrapsum,nonwrapsum) << endl;


    return 0;
}

// LeetCode Solution :

// class Solution {
// public:
//     int maxSubarraySumCircular(vector<int>& arr) {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
        
//         int n = arr.size();
//         int maxSum = INT_MIN;
//         int minSum = INT_MAX;
//         int arrSum = 0;
        
//         int temp_maxSum = 0;
//         int temp_minSum = 0;
        
//         for(int i=0;i<n;++i)
//         {
//             arrSum += arr[i];
            
//             temp_maxSum += arr[i];
//             maxSum = maxSum<temp_maxSum? temp_maxSum:maxSum;
//             temp_maxSum = temp_maxSum<0?0:temp_maxSum;
            
//             temp_minSum += arr[i];
//             minSum = minSum>temp_minSum? temp_minSum:minSum;
//             temp_minSum = temp_minSum>0?0:temp_minSum;
//         }
//         if(arrSum==minSum)
//             return maxSum;
//         return max(maxSum,(arrSum-minSum));
//     }
// };

