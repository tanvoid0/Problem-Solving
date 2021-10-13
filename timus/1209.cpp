/** Formula
 * 1 + (n*(n+1) / 2) = (n^2 + n + 2)/2
 *
 * (n^2 + n + 2)/2 = x
 * n = (sqrt(8x-7)-1) / 2
 */

#include <bits/stdc++.h>
using namespace std;
string str;

string solve(long long int x) {
  long long int n;
  n = (sqrt((8.0*x) - 7) - 1)/2.0; // n = (sqrt(8x-7)-1) / 2
  return (x == 1 + ((n*(n+1))/2.0)) ? "1" :"0";   // 1 + (n*(n+1) / 2) = (n^2 + n + 2)/2
}

int main() {
  int t;
  long long int K;

  cin >> t;

  for(int i=0; i<t; i++){
    cin >> K;
    cout << solve(K);
    if(i != t-1) cout << " ";
  }
  cout << endl;

  return 0;
}