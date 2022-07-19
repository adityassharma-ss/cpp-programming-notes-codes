#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    while(b!=0){
        int c= (a & b);
        a = a ^ b; 
        b = c << 1;
    }
    cout << "SUM : " << a;

    return 0;

}

// int add(int num1, int num2){  //function definition
// int i;
// for(i=0; i<num2; i++){
//    num1++;
// }
// return num1;
// }