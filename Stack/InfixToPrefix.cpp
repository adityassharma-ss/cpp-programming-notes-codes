#include<bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
  if(ch=='+'||ch=='-')
    return 1;
  else{
    if(ch=='*'||ch=='/')
      return 2;
    else
      return 3;
  }
}

int main(){
    stack<char> s;
    int length=0,i,t;
    string infix,prefix="";
    cout<<"Enter expression: ";
    cin>>infix;
    
    length=infix.length();
    
    // Reverse infix
    reverse(infix.begin(), infix.end());

    for(i=0;i<length;i++){
      t=precedence(infix[i]);
      if(t==3){
        prefix+=infix[i];
        continue;
      }
      else{
        if(s.empty() || t>=precedence(s.top())){
          s.push(infix[i]);
          continue;
        }
        else{
          while(!s.empty() && t<precedence(s.top())){
            prefix+=s.top();
            s.pop();
          }
          s.push(infix[i]);
          continue;
        }
      }
    }
    while(!s.empty()){
      prefix+=s.top();
      s.pop();
    }

    reverse(prefix.begin(),prefix.end());
    cout<<"Prefix expression: "<<prefix;

    return 0;
}