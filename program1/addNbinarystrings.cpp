// C++ program to add n binary strings
#include <bits/stdc++.h>
using namespace std;
 
// This function adds two binary strings and return
// result as a third string
string addBinaryUtil(string a, string b)
{
    string result = ""; // Initialize result
    int s = 0; // Initialize digit sum
 
    // Traverse both strings starting from last
    // characters
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1) {
 
        // Compute sum of last digits and carry
        s += ((i >= 0) ? a[i] - '0' : 0);
        s += ((j >= 0) ? b[j] - '0' : 0);
 
        // If current digit sum is 1 or 3,
        // add 1 to result
        result = char(s % 2 + '0') + result;
 
        // Compute carry
        s /= 2;
 
        // Move to next digits
        i--;
        j--;
    }
    return result;
}
 
// function to add n binary strings
string addBinary(string arr[], int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
        result = addBinaryUtil(result, arr[i]);
    return result;
}
 
// Driver program
int main()
{
    string arr[] = { "1", "10", "11" };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << addBinary(arr, n) << endl;
    return 0;
}