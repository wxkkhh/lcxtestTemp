#include <bits/stdc++.h>
using namespace std;
int w1[505];
int w2[505];
int value[505];
int result[505][505];
int main()
{
    int maxv1, maxv2;
    int n;
    cin >> maxv1 >> maxv2 >> n;
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        cin >> value[i] >> w1[i] >> w2[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = maxv1; j >= w1[i]; j--)
        {
            for (k = maxv2; k >= w2[i]; k--)
            {
                result[j][k] = max(result[j][k], result[j - w1[i]][k - w2[i]] + value[i]);
            }
        }
    }
    cout << result[maxv1][maxv2];
    return 0;
}