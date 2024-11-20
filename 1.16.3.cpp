#include <bits/stdc++.h>
using namespace std;
double w[1000006];
int v[1000006];
double dp[1000006];
int result = 0;
int main()
{
    int n;
    double maxnn;
    cin >> n >> maxnn;
    int i, j;
    for (i = 1; i < 1000002; i++)
    {
        dp[i] = 1e9;
    }
    dp[0] = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i] >> w[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1000001; j >= v[i]; j--)
        {
            dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    for ( i = 1; i < 1000001; i++)
    {
        if(dp[i]<=maxnn)
            result = i;
    }
    cout << result;
    return 0;
}