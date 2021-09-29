#include <stdio.h>
#include <math.h>
#define MAX 1000

long long int fact(long long int n) {
  if(n == 1) return 1;
  return n * fact(n-1);
}

int main(void) {
  int x, n, i;
  long long int arr[MAX];
  scanf("%d %d", &x, &n);

  for(i=0; i<10; i++){
    long long int power = (i/fact(i));
    arr[i] = pow(x, power);
  }

  return 0;
}
