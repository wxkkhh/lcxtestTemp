#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[110005];
string s;
priority_queue<int> d;
priority_queue<int, vector<int>, greater<int>> x;
int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int q = 0, i, k, n, m, n1, n2, n3, j = 0, h = 1, t = 0;
    int ans = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    if (n % 2)
    {
        for (i = 1; i <= n / 2; i++)
            d.push(a[i]);
        for (i = i; i <= n; i++)
            x.push(a[i]);
    }
    else
    {
        for (i = 1; i <= (n / 2); i++)
            d.push(a[i]);
        for (i = i; i <= n; i++)
            x.push(a[i]);
    }
    cin >> m;
    while (m--)
    {
        cin >> s;
        if (s == "add")
        {
            cin >> n1;
            if (x.size() == d.size())
            {
                if (n1 <= d.top())
                    d.push(n1);
                else
                {
                    x.push(n1);
                    d.push(x.top());
                    x.pop();
                }
            }
            else
            {
                if (n1 <= d.top())
                {
                    d.push(n1);
                    x.push(d.top());
                    d.pop();
                }
                else
                    x.push(n1);
            }
        }
        else
            cout << d.top() << '\n';
    }
    return 0;
}