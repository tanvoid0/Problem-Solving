/**
 * 1
 * 1    2
 * 1    2   3
 * 1    2   3   4
 * 1    2   3   4   5
 */
#include <bits/stdc++.h>
using namespace std;
int n;
void solve(int i, int j) {
    if(j > n+1) return;
    if(i >= j) {
        cout << endl;
        return solve(1, j+1);
    }
    printf("%4d", i);
    solve(i+1, j);
}

int main() {
    cin >> n;
    solve(1, 1);
    return 0;
}