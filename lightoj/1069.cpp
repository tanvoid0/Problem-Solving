#include <bits/stdc++.h>
using namespace std;


int main() {
    int T; cin >> T;
    for(int i =1; i<=T; i++){
        int a, b; cin >> a >> b;
        // 1. Lift -> Current Floor + Enter The lift + 3*2 open & Close the lift
        int time = 0;
        time = 4 * abs(a-b) + 5 + 6;
        // 2. Current Floor -> Ground Floor + Exit The lift + 3 Open The lift
        time += 4*a + 5 + 3;
        cout << "Case " << i << ": " << time << endl;
    }
    return 0;
}