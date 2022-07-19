#include<bits/stdc++.h>
using namespace std;

bool pairSum( int n, int arr[], int k)
{
    int low = 0;
    int high = n-1;

    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main()
  {   int n;
      int arr[]={2,4,7,11,14,16,20,21};
      int k=31;
      cout<<pairSum(n,arr,k)<<endl;
      return 0;
  }