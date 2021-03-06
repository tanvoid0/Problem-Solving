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


//2nd procedure

/**
 * 1
 * 1    2
 * 1    2   3
 * 1    2   3   4
 * 1    2   3   4   5
 */
#include <bits/stdc++.h>
using namespace std;

int N = 5;
void recursion2(int i, int j){
    if(j>i){
        printf("\n");
        return;
    }
    printf("%4d", j);
    recursion2(i, j+1);
}

void recursion1(int i){
    if(i>N) return;
    recursion2(i, 1);
    recursion1(i+1);
}

int main() {
//  cin >> N;
    recursion1(1);
    return 0;
}