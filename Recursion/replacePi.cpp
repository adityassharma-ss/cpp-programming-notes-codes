#include <bits/stdc++.h>
using namespace std;

class Pi{
public:
    void replacePi(string s, int i=0){
        if(i==s.length()){
            return;
        }
        else if(s[i]=='p' && s[i+1]=='i'){
            cout<<3.14;
            replacePi(s,i+2);
        }
        else{
            cout<<s[i];
            replacePi(s,i+1);
        }
        return;
    }
    
};

int main() {
	// your code goes here
	int n;
	cin>>n;
	Pi obj;
	string s;
	while(n--){
	cin>>s;
	obj.replacePi(s);
	cout<<endl;
	}
	return 0;
}
