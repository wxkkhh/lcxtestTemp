#include<iostream>
#include<cmath>
using namespace std;
long long arr[2000][2000];

int main()
{
    int i, j;
    int n;
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j <= i;j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = n - 1; i >= 0;i--)
    {
        for (j = 0; j <= i;j++)
        {
            arr[i][j] += max(arr[i + 1][j], arr[i + 1][j + 1]);
        }
    }
    cout << arr[0][0];
    return 0;
}