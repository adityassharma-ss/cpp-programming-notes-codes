#include<vector>
using namespace std;
int main()
{
 int n,i,j;
 vector<int> prime;             // The vector to store if the number is prime or composite
 cin>>n;
 for(i=0;i<=n;i++)              // to initialise all numbers from 2 to n as prime
 {
  if(i==0 || i==1)
   prime.push_back(0);
  else
   prime.push_back(1);
 }
  for(i=0;i<n;i++)              // to check if a position is prime, and if it is then mark al its multiples from its square as composite
  { if(prime[i])
    {
     for(j=i*i;j<=n;j+=i)
      prime[j]=0;
    }
  }
   for(i=0;i<n;i++)             // to display the prime numbers
    if(prime[i])
    cout<<i<<" ";
    return 0;
}








// #include<iostream>
// using namespace std;
// int check_prime(int num)                  // Funcion to check if he number is prime or not
// {
//  int i;
//  for(i=2;i<=num/2;i++)
//   if(num%i==0)                           // If a number is divisible by any number then we return 0 since it is composite
//    return 0;
//  return 1;
// }
// int main()
// {
//  int u_rng,l_rng,i;
//  cin>>u_rng>>l_rng;                       // Taking upper and lower number for range
//  for(i=l_rng;i<=u_rng;i++)
//   if(check_prime(i))                      // If the number is prime we print the number
//    cout<<i<<" ";
//  return 0;
// }