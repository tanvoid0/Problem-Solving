#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int t; cin >> t;

    for(long long int i=1; i<=t; i++){
        long long int n,m; cin >> n >> m;
        cout << "Case " << i <<  ": ";

        if(n == 1 or m == 1)
            cout << max(n, m);
        else if(n == 2 or m ==2)
            cout << ((m*n)/8)*4 + (((m*n)%8) >= 4 ? 4 : (m*n)%8);
        else
            cout << (n*m+1)/2;
        cout << endl;
    }
    return 0;
}