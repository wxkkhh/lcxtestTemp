#include <bits/stdc++.h>
using namespace std;
int arr[100][100];
long long result[100][100];
int main()
{
    int maDEh, maDEl;
    int lasthhh, lastlll;
    cin >> lasthhh >> lastlll;
    cin >> maDEh >> maDEl;
    lasthhh += 2, lastlll += 2, maDEh += 2, maDEl += 2;

    result[2][2] = 1;
    arr[maDEh - 2][maDEl - 1] = -1;
    arr[maDEh - 1][maDEl - 2] = -1;
    arr[maDEh - 2][maDEl + 1] = -1;
    arr[maDEh - 1][maDEl + 2] = -1;
    arr[maDEh + 1][maDEl - 2] = -1;
    arr[maDEh + 2][maDEl - 1] = -1;
    arr[maDEh + 2][maDEl + 1] = -1;
    arr[maDEh + 1][maDEl + 2] = -1;
    arr[maDEh][maDEl] = -1;

    int i, j;
    for (i = 2; i <= lasthhh; i++)
    {
        for (j = 2; j <= lastlll; j++)
        {
            if (i == 2 && j == 2)
                continue;
            if (arr[i][j] == -1)
                continue;

            result[i][j] += result[i - 1][j] + result[i][j - 1];
        }
    }

    cout << result[lasthhh][lastlll];
    return 0;
}