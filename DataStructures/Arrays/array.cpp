#include <bits/stdc++.h>
using namespace std;

int main()
{


    // int arr[10]= {10,20,30,40};
    // cout << arr[3] << endl;


    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<=n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<=n;i++){
        cout << arr[i] << " ";
    }

    

    return 0;
}