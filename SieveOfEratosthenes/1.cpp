/* Sieve of Eratosthenes is a simple and ancient algorithm used to find the prime numbers up to any given limit. It is one of the most efficient ways to find small prime numbers. For a given upper limit n the algorithm works by iteratively marking the multiples of primes as composite, starting from 2 */

#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n){

    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout << i << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;

    primeSieve(n);
    return 0;
}