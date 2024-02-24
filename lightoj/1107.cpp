#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int M; cin >> M;
        cout << "Case " << i << ":" << endl;
        while(M--){
            int x,y; cin >> x >> y;
            if(x >= x1 && x <= x2 && y >= y1 && y<= y2)
                cout << "Yes";
            else cout << "No";
            cout << endl;
        }
    }
    return 0;
}