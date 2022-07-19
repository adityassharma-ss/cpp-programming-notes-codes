// Given an array of 0, 1, and 2, sort the elements in an order such that all the zeros come first before 1 and all the 2’s in the end. We have to sort all the elements of the array in-place.

// We can solve this problem using DNF (Dutch National Flag) Sorting Algorithm.

/* DNF Sorting Algorithm − The algorithm requires 3 pointers to iterate throughout the array by swapping the necessary elements.

    Create a low pointer at the beginning of the array and high pointer pointing at the end of the array.

    Find the Midpoint of the array and create a mid pointer as well that iterates from the beginning of the array till the end.

    If the mid-pointer of the array is ‘0’, then swap the element pointing at low. Increment the low pointer and mid pointer.

    If the mid-pointer of the array is ‘2’, then swap it with the element pointing at the high. Increment the mid pointer and decrement the high pointer.

    If the mid-pointer of the array is ‘1’, then increase the mid pointer */

#include <bits/stdc++.h>
using namespace std;

void dnfSort(int arr[], int n) {
    int low = 0;
    int mid = 0; 
    int high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap (arr[low], arr[mid]);
            low++; mid++;
        }
        else if (arr[mid] = 1) { ==
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[] = {1,0,2,1,0,1,2,1,2};

    for(int i=0;i<9;i++){
        cout << arr[i] << endl;

    }
    return 0;
}