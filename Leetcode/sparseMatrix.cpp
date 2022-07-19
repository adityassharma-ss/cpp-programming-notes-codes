#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>res(A.size(), vector<int>(B[0].size()));
        for(int i = 0; i < A.size(); i++)
            for(int j = 0; j < A[0].size(); j++)
                if(A[i][j] != 0)
                for(int k = 0; k < B[0].size(); k++)
                    res[i][k] += A[i][j] * B[j][k];
        return res;
    }
};

// class Solution {
// public:
//    vector<vector<int<> multiply(vector<vector<int<>& A, vector<vector<int<>& B) {
//       int r1 = A.size();
//       int r2 = B.size();
//       int c1 = A[0].size();
//       int c2 = B[0].size();
//       vector < vector <int< > ret(r1, vector <int< (c2));
//       vector < pair <int, int> > sparseA[r1];
//       for(int i = 0; i < r1; i++){
//          for(int j = 0; j < c1; j++){
//             if(A[i][j] != 0)sparseA[i].push_back({j, A[i][j]});
//          }
//       }
//       for(int i = 0; i < r1; i++){
//          for(int j = 0; j < sparseA[i].size(); j++){
//             for(int k = 0; k < c2; k++){
//                int x = sparseA[i][j].first;
//                if(B[x][k] != 0){
//                   ret[i][k] += sparseA[i][j].second * B[x][k];
//                }
//             }
//          }
//       }
//       return ret;
//    }
// };