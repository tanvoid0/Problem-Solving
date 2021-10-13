#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int Random(int min, int max) {
  return (rand() % (max - min+1))+min;
}


/**
 * Returns  the number of problems stored in each computer.
 * @param n denotes the total number of problems.
 */
vector<int> problemsStored(int n) {
  vector<int> res;
  if(n == 0){
    res.push_back(0);
    res.push_back(0);
    return res;
  }
  int a = (int) rand();
  if(n<=10){
    a = Random(0, n);
  } else {
    a = Random(n-10, 10);
  }
  // Implement this method
  res.push_back(a);
  res.push_back(n-a);
  return res;
}

/**
 * Takes care of the problem input and output.
 */
int main() {
  int cases;
  srand(time(0));
  scanf("%d", &cases);
  for (int caseno = 1; caseno <= cases; ++caseno) {
    int n;
    scanf("%d", &n);

    vector<int> ans = problemsStored(n);
    printf("%d %d\n", ans[0], ans[1]);
  }
  return 0;
}
