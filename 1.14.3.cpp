#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[10000];
ll dp[10000][10000];
int main()
{
    int n, m, i, j;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = m; j >= 0; j--)
        {
            if (arr[i] > j)
                dp[i][j] = dp[i - 1][j];
            else if (arr[i] == j)
                dp[i][j] = dp[i - 1][j] + 1;
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i]];
        }
    }
    cout << dp[n][m];
    return 0;
}