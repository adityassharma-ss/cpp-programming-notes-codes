// Vectors are dynamic arrays. They have the ability to resize itself when it gets
// filled. The size of the vector gets doubled each time when they get filled.

#include <bits/stdc++.h>
using namespace std;

// Syntax
// vector <data_type> name(size,value)

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);

// 2D vector

// Declared a vector of size nxm
// initialised a grid with -1
vector<vector<int>> grid(n,vector<int>(m,-1));

// Iterators

vector<int>::iterator it;
for(it = v.begin(); it != v.end(); it++){
    cout << *it << endl;
} // 1 2 3

// for each loop

for(auto element : v){
    cout << element << endl;
} // 1 2 3

// vector::swap()

v.swap(v1);

// sort()

sort(v.begin(), v.end());

// To get the sum of the vector
// We use accumulate(), defined in the <numeric> library.
// #define <numeric>

int sum = accumulate(v.begin(), v.end(), 0);
cout << sum;

// To get Max_element/min_element of the vector

int mx = *max_element(v.begin(), v.end());
int mn = *min_element(v.begin(), v.end());

// To convert the vector into a prefix sum vector(Quite useful)
// Example: v = {1,2,3}
// Prefix_sum v = {1,3,6}

partial_sum(v.begin(), v.end(), v.begin());