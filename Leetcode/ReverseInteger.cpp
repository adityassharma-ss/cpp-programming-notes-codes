#include <bits/stdc++.h>
using namespace std;

//LEETCODE SOLUTION
// class Solution {
// public:
//     int reverse(int n) {
//         long long rev = 0;
//         while(n) {
//             rev = rev*10 + x%10;
//             n /= 10;
//         }
//         return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
//     }
// };

int main() {
    int n, reversed_number = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
}

    cout << "Reversed Number = " << reversed_number;

return 0;
}


