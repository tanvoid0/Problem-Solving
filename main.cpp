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
}
//
//void recursion2(int i, int j){
//    if(j > i) {
//        printf("\n");
//        return;
//    };
//    printf("%4d", j);
//    recursion2(i, j+1);
//}
//
//void recursion1(int i) {
//    if(i > N) return;
//    recursion2(i, 1);
//}

int main() {
//  cin >> N;
  recursion1(1);
  return 0;
}