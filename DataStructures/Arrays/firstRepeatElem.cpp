#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
  for(int i=0;i<n;i++) // select an element
    for(int j=i+1;j<n;j++) //traverse ahead and check for duplicate
        if(arr[i]==arr[j])
        {
            cout<<arr[i];
            return 0;
        }
cout<<"No repeating integer found\n";
return 0;
}