#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int Random(int min, int max) {
  return abs((rand() % (max - min+1))+min);
}

int main() {
  srand(time(0));
  while(true){
    int a;
    cin >> a;
    cout << Random(10-a, 10);
  }
  return 0;
}