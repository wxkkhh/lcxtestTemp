#include <bits/stdc++.h>
using namespace std;
int h[100005];
map<int, int> dp[2004];
int main()
{
    int n, i, j;
    cin >> n;
    int result = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            dp[i][h[i] - h[j]] += dp[j][h[i] - h[j]] + 1;
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (auto it = dp[i].begin(); it != dp[i].end(); it++)
        {
            result += it->second;
        }
    }
    cout << result + n;
    return 0;
}