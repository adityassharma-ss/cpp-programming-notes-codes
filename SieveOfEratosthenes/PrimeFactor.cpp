#include <bits/stdc++.h>
using namespace std;

void primefactor(int n) {
    int spf[n+1] = {0};
    for (int i = 2; i <= n; i++) {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
    }
            }
        }
    }
    while (n != 1) {
           cout << spf[n] << " ";
           n = n / spf[n];
    }
}
int main(){
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}
        



// bool marks[10010];
// // array of vectors to store the facorization
// vector<int> fact[10010];

// void sieve_factorization(int n) {
//   for (int i = 2; i <= n; ++i) {
//     if (marks[i])
//       continue; // if i is composite

//     // otherwise 'i' is prime
//     // so we find all the multiples of i

//     for (int j = 2 * i; j <= n; j += i) {
//       marks[j] = 1; //  mark those as composite

//       // we know i is a prime factor of j
//       // so we push that into fact[j]
//       fact[j].push_back(i);
//     }

//     // i is a prime
//     // so it is a prime factor of itself
//     fact[i].push_back(i);
//   }
// }

