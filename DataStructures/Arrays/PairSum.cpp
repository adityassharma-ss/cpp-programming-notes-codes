// Find whether there exist 2 numbers that sum to K
// TC : O(n)
#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k){
    
    int low=0;
    int high = n-1;

    while(low < high){
        if(arr[low]+arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low] + arr[high] > k){
            high--;
            
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
    cout << pairSum(arr,n,k) << endl;

    


    return 0;
}












// time complexity - O(n^2)

// #include <bits/stdc++.h>
// using namespace std;

// bool pairSum(int arr[], int n, int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == k){
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }

//     }
//     return false;
// }

// int main(){
//     int n,k;
//     cin >> n >> k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];

//     }
//     cout << pairSum(arr,n,k) << endl;

    


//     return 0;
// }