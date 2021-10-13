#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  int sum = 0;
  if(N>0)
    for(int i=1; i<=N; i++)
      sum+=i;
  else
    for(int i=N; i<=1; i++)
      sum+=i;
  cout << sum << endl;

  return 0;
}