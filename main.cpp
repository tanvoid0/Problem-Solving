#include <bits/stdc++.h>
using namespace std;


int main() {
    int T; cin >> T;
    for(int i=1; i<=T; i++){
        double side[3];
        cin >> side[0] >> side[1] >> side[2];
        int n = sizeof(side)/sizeof(side[0]);
        sort(side, side+n, greater<int>());
        cout << "Case " << i << ": ";
        if(side[0] * side[0] == (side[1]*side[1])+(side[2]*side[2]))
            cout << "yes";
        else cout << "no";
        cout << endl;

    }
    return 0;
}