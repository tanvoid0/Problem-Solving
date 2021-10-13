#include <bits/stdc++.h>
#define pi acos(-1)
using namespace std;

double area(double a, double b, double c) {
  double p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  cout << area(z, x, y) << endl;

  return 0;
}