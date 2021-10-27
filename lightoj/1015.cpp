#include <bits/stdc++.h>

using namespace std;

signed main() {
    int T; cin >> T;
    long long int dust=0;
    for(int i=1; i<=T; i++){
        int N; cin >> N;
        dust=0;
        for(int j=0; j<N; j++){
            int x; cin >> x;
            if(x>0) dust+=x;
        }
        cout << "Case " << i << ": " << dust << endl;
    }
    return 0;
}