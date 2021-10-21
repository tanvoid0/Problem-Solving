/**
 * 1.1^2 + 2.3^2 + 3.5^2 + .... up to nth term.
 */
#include <bits/stdc++.h>
using namespace std;

int solve(int i) {
    if(i <= 1) return 1;
    return i*(i*2-1)*(i*2-1) + solve(i-1);
}

int main() {
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}