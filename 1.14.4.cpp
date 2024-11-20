#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll w[100005];
ll val[100005];
ll result[100005];
int main()
{
    int v, n, c;
    cin >> v >> n >> c;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        cin >> val[i] >> w[i];
    }

    for (i = 1; i <= n; i++)
    {
        for (j = c; j >= w[i]; j--)
        {
            result[j] = max(result[j], result[j - w[i]] + val[i]);
        }
    }

    if (result[c] < v)
    {
        cout << "Impossible";
        return 0;
    }

    for (i = c; i >= 0; i--)
    {
        if (result[i] < v)
        {
            cout << c - i - 1;
            break;
        }
    }
    
    return 0;
}