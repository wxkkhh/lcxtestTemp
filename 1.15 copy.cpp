#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int maxx = -1e8;
        int maxy = -1e8;
        int minx = 1e8;
        int miny = 1e8;
        int x, y;
        for (int i = 1; i <= 4; i++)
        {
            cin >> x >> y;
            if (x > maxx)
                maxx = x;
            if (x < minx)
                minx = x;
            if (y > maxy)
                maxy = y;
            if (y < miny)
                miny = y;
        }
        cout << (maxx - minx) * (maxy - miny) << endl;
    }
    return 0;
}