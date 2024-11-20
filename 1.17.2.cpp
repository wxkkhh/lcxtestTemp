#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int qianx, qiany;
        cin >> qianx >> qiany;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 >= x2)
        {
            cout << "Draw" << endl;
        }
        else if ((x2 - x1) % 2 == 1) // Alice
        {
            if (fabs(y1 - y2) <= 1)
            {
                cout << "Alice" << endl;
            }
            else if (y1 < y2)
            {
                if (y1 + ((x2 - x1 + 1) / 2) >= qiany)
                {
                    cout << "Alice" << endl;
                }
                else
                {
                    cout << "Draw" << endl;
                }
            }
            else
            {
                if (y1 - ((x2 - x1 + 1) / 2) <= 1)
                {
                    cout << "Alice" << endl;
                }
                else
                {
                    cout << "Draw" << endl;
                }
            }
        }
        else // Bob
        {
            if (y1 == y2)
            {
                cout << "Bob" << endl;
            }
            else if (y1 < y2)
            {
                if (y2 - (x2 - x1) / 2 <= 1)
                {
                    cout << "Bob" << endl;
                }
                else
                {
                    cout << "Draw" << endl;
                }
            }
            else
            {
                if (y2 + (x2 - x1) / 2 >= qiany)
                {
                    cout << "Bob" << endl;
                }
                else
                {
                    cout << "Draw" << endl;
                }
            }
        }
    }
    return 0;
}