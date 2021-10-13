#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)


int main()
{
  ll tc, num, t = 1, a, b;

  sc1(tc);

  while (tc--){
    ll num;
    sc1(num);

    ll sqt = ceil(sqrt(num));
    ll extNum = sqt*sqt - num;
    ll row = 0, col = 0;

    if(extNum < sqt){
      row = extNum + 1;
      col = sqt;
    }
    else{
      row = sqt;
      col = num - (sqt - 1) * (sqt - 1);
    }

    if(sqt % 2 == 0) swap(row, col);

    cout << "Case " << t++ << ": ";
    cout << row << " " << col << endl;
  }

  return 0;
}