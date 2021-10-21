/**
 * 1 + 2 + 3 + .... up to nth term.
 */
#include <bits/stdc++.h>
using namespace std;

int solve(int i) {
  if(i <= 1) return 1;
  return i + solve(i-1);
}

int main() {
  int n;
  cin >> n;
  cout << solve(n);
  return 0;
}