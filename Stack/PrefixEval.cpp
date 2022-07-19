#include <bits/stdc++.h>
using namespace std;

double evaluatePrefix(string prefixExp) {
   
   stack<double> st;
   int size = prefixExp.size() - 1;
   
   for (int i = size; i >= 0; i--) {

      if (isdigit(prefixExp[i]))
         st.push(prefixExp[i] - '0');
      else {
         double o1 = st.top();
         st.pop();
         double o2 = st.top();
         st.pop();
         if( prefixExp[i] == '+')
            st.push(o1 + o2);
         else if( prefixExp[i] == '-')
            st.push(o1 - o2);
         else if( prefixExp[i] == '*')
           st.push(o1 * o2);
         else if( prefixExp[i] == '/')
           st.push(o1 / o2);
         else{
            cout<<"Invalid Expression";
            return -1;
         }
      }
   }
   return st.top();
}

int main()
{
   string prefixExp = "*+69-31";
   cout<<"The result "<<prefixExp<<" is "<<evaluatePrefix(prefixExp);
   return 0;
}