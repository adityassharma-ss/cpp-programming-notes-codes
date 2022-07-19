#include <bits/stdc++.h>
using namespace std;


// LEETCODE SOLUTION

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0 || (x != 0 && x%10 == 0)) return false;
//         int y = 0;
//         while (x > y){
//     	    y = y*10 + x%10;
//     	    x = x/10;
//         }
//         return (x==y || x==y/10); 
//     }
// };

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}