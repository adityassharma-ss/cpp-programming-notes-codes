#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s = "9835489547572489573809";
    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;

    return 0;
}