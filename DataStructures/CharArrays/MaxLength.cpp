#include <iostream>
using namespace std;
//function to find longest word
int word_length(string str) {
   int len = str.length();
   int temp = 0;
   int newlen = 0;
   for (int i = 0; i < len; i++) {
      if (str[i] != ' ')
         newlen++;
      else {
         temp = max(temp, newlen);
         newlen = 0;
      }
   }
   return max(temp, newlen);
}
int main() {
//    string str = "lemon soda is the best drink in the world";
    string str;
    cin >> str;
   cout <<"maximum length of a word is : "<<word_length(str);
   return 0;
}