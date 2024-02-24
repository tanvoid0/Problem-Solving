#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double R;
        int n;
        cin >> R >> n;
        double r = (R * sin(pi / n * 1.0)) / (1 + sin(pi / n * 1.0));
        cout << "Case " << i << ": " << fixed << setprecision(10) << r << endl;
    }
    return 0;
}