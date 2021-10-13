#include <bits/stdc++.h>
#define pi acos(-1)
using namespace std;

double angle(double a, double b, double c) {
  // radian
  double radian = acos(((a*a)+(b*b)-(c*c))/(2*a*b));

  // degree
  return radian * 180 / pi;
}

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  cout << angle(x, y, z) << endl;
  cout << angle(y, z, x) << endl;
  cout << angle(z, x, y) << endl;

  return 0;
}