// Accepted
// exec time 0.031
// memory 712 kb

#include <bits/stdc++.h>
#define MAX 200000 // It's crucial, 20,000 value still fails
using namespace std;

int arr[MAX];
void SieveOfEratosthenes(int n) {

  // Create a boolean array with true values
  // They'll be false, if they are prime
  bool prime[n+1];
  memset(prime, true, sizeof(prime));

  for(int i=2; i*i <=n; i++){
    // If prime is not false yet, need to get the multipliers
    if(prime[i]){
      for(int j = i*i; j<=n; j+=i)
        prime[j] = false;
    }

  }
  for(int i=2, j=0; i<n; i++){
    if(prime[i]){
      arr[j++]=i;
    }
  }
}

