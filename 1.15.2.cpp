#include <bits/stdc++.h>
using namespace std;
int dis[10000007];
int arr[10000007];
int main()
{
    int ans = 1e8;
    int n, m;
    cin >> n >> m;
    int i;
    arr[0] = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dis[i] = arr[i] - arr[i - 1];
    }
    for (i = 1; i <= m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        dis[l] += x;
        dis[r + 1] -= x;
    }
    for ( i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + dis[i];
        ans = min(ans, arr[i]);
    }
    cout << ans;
    return 0;
}