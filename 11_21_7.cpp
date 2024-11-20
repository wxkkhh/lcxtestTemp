#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, c;
    cin >> n >> c;
    ll s[n];
    int l = 0;
    stack<ll> sk;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
        for (int j = i; j <= i; ++j)
        {
            if (sk.empty() || sk.top() > s[j])
            {
                for (; l <= j; ++l)
                {
                    sk.push(s[l]);
                }
            }
            if (sk.size() + (j - l + 1) == c || j == n - 1)
            {
                cout << sk.top() << " ";
                sk.pop();
                j = l - 1; /* 此处 l - 1 是因为下一次循环开始时 j 会直接 +1, 我一开始 WA 就是因为这个 */
            }
        }
    }
    for (; !sk.empty();)
    {
        cout << sk.top() << " ";
        sk.pop();
    }
    return 0;
}