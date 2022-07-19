#include <bits/stdc++.h>
using namespace std;

bool balancedParenthesis(string str){
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            st.push(str[i]);
        }
        else if(str[i] == ')' || str[i] == ']' || str[i] == '}'){
//  See the Ascii table then u got to know that the difference between the parenthesis is 1 or 2
            if(!st.empty() && str[i]-st.top()>0 && str[i]-st.top()<=2){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}

int main(){
    // string str = "[()}{";
    string str = "[{()}]";
    cout << balancedParenthesis(str);
}