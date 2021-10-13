// Accepted
// 0.001s
// 376 KB

#include <bits/stdc++.h>
using namespace std;

long long int fact(int i, int j){
  if(i <= j) return i;
  return i * fact(i-j, j);
}

int main() {
  int n, k;
  string s;
  cin >> n >> s;
  k = s.length();
  cout << fact(n, k) << endl;

  return 0;
}