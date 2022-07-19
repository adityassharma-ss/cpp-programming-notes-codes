// np of balanced parenthesis pairs

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, ans, l, r;
    cout << "Enter test cases: " << endl;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        
        cin>>l>>r;

        n=min(l, r);

        n=(n*(n+1))/2;

        cout<<"Case #"<<i<<": "<<n<<"\n";
    }
}