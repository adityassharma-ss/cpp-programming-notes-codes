// Find the number of ways to tile the floor with 1x2 and 1x1 tiles.
// Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)

#include <bits/stdc++.h>
using namespace std;

int tilingWays(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return tilingWays (n - 1) + tilingWays (n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << tilingWays(n) << endl;
    return 0;
}