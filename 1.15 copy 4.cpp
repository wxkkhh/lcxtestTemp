#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int geshu;
    cin >> geshu;
    while (geshu--)
    {
        int n;
        ll f, h, kai;
        ll l, r;
        cin >> n >> f >> h >> kai;
        l = 0;
        int i, pan = 1;
        for (i = 0; i < n; i++)
        {
            cin >> r;
            if ((r - l) * h >= kai)
            {
                f -= kai;
                if (f <= 0)
                {
                    pan = 0;
                    //break;
                }
            }
            else
            {
                f -= (r - l) * h;
                if (f <= 0)
                {
                    pan = 0;
                    //break;
                }
            }
            l = r;
            //cout << f << ' ';
        }
        if (pan)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}