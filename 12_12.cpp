#include <iostream>
using namespace std;
int arr[150][150];
int result[150][150];
int maxresult = -1;
int main()
{
    int n, m;
    cin >> n >> m;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (arr[i][j])
            {
                result[i][j] = min(min(result[i - 1][j], result[i][j - 1]), result[i - 1][j - 1]) + 1;
                if (maxresult < result[i][j])
                {
                    maxresult = result[i][j];
                }
            }
        }
    }
    cout << maxresult;
    return 0;
}