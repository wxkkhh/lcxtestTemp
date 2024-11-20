#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int sum[1000][1000];

int mianji(int x1, int y1, int x2, int y2)
{
    int x;
    x = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
    return x;
}

int main()
{
    int result = -1e8;
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    int x1, x2, y1, y2;
    for (x1 = 1; x1 <= n; x1++)
    {
        for (y1 = 1; y1 <= n; y1++)
        {
            for (x2 = 1; x2 <= n; x2++)
            {
                for (y2 = 1; y2 <= n; y2++)
                {
                    if (x2 >= x1 && y2 >= y1)
                    {
                        int temp;
                        temp = mianji(x1, y1, x2, y2);
                        result = max(temp, result);
                    }
                }
            }
        }
    }
    cout << result;
    return 0;
}