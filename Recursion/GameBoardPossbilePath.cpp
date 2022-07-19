#include <bits/stdc++.h>
using namespace std;

int CountPath(int s, int e){
    if(s==e){
        return 1;

    }
    if(s>e){
        return 0;
    }
    int count =0;
    for(int i=1;i<=6;i++){
        count+= CountPath(s+i,e);
    }
    return count;

}

int main(){
    int s,e;
    cin >> s >> e;
    cout << CountPath(s,e)<< endl;

    // cout << CountPath(0,3);
    return 0;
}