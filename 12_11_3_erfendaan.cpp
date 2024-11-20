#include <iostream>
using namespace std;
int n, m;
int arr[1000][1000];

int keyima(int a)
{
    int i, j;
    int mark = 1;
    for (i = 1; i + a-1 <= m; i++)
    {
        for (j = 1; j + a -1<= n; j++)
        {
            mark = 1;
            for (int k = i; k - i + 1 <= a; k++)
            {
                for (int l = j; l - j + 1 <= a; l++)
                {
                    if (arr[l][k] == 0)
                    {
                        mark = 0;
                        break;
                    }
                }
                if (mark == 0)
                {
                    break;
                }
            }
            if (mark)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int i, j;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int left = 0, right = max(m,n)+1;
    int ans = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (keyima(mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;
    return 0;
}