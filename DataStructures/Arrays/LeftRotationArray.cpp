#include <iostream>
using namespace std;

int main()
{
	int n,d;

	//input value of n and d
	cout<<"Enter the value of n and d"<<endl;
	cin>>n>>d;
	int arr[n];

	//input array elements
	cout<<"enter the array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	//print the elements of array after rotation
	cout<<"array elements after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[(i+d)%n]<<" ";
	}

	return 0;
}

// competitive program solution

// vector<int> Solution::rotateArray(vector<int> &A, int B) {
// 	vector<int> ret;
// 	int j = 0;
// 	B = B%(A.size());
// 	for (int i = 0; i < A.size(); i++) {
// 		if((i+B) < A.size()){
// 		    ret.push_back(A[i + B]);    
// 		}
// 		else{
// 		    ret.push_back(A[j]);
// 		    j++;
// 		}
		
// 	}
// 	return ret; 
// }