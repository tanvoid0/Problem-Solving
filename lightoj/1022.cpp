#include <bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;

signed main() {
    int T; cin >> T;
    for(int i=1; i<=T; i++){
        double r; cin >> r;
        double circle, square, res;
        square = 4*r*r;
        circle = PI*r*r;
        res = square - circle;
        cout << fixed << setprecision(2) << "Case " << i << ": " << res << endl;
    }
    return 0;
}