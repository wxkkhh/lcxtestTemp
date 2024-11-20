#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <iostream>
using namespace std;
int arr[1000][1000];
int isFangwenGuo[1000][1000];
int fx[5] = {0, 1, 0, -1, 0};
int fy[5] = {0, 0, 1, 0, -1};
int n, m;

struct point
{
    int h;
    int l;
};

void bfs(int hang, int lie)
{
    queue<point> r;
    point temp;
    temp.h = hang;
    temp.l = lie;
    r.push(temp);
    arr[hang][lie] = 0;
    isFangwenGuo[hang][lie] = 1;
    while (!r.empty())
    {
        point temp2;
        int hangjin = r.front().h;
        int liejin = r.front().l;
        r.pop();
        for (int kk = 1; kk <= 4; kk++)
        {
            temp2.h = hangjin + fy[kk];
            temp2.l = liejin + fx[kk];
            if (temp2.h > n || temp2.h < 1 || temp2.l > m || temp2.l < 1)
            {
                continue;
            }
            if (isFangwenGuo[temp2.h][temp2.l] || arr[temp2.h][temp2.l] == 0)
            {
                continue;
            }

            arr[temp2.h][temp2.l] = 0;
            isFangwenGuo[temp2.h][temp2.l] = 1;
            r.push(temp2);
        }
    }
}
int main()
{
    int result = 0;
    cin >> n >> m;
    int i, j;
    char cc[1000][1000];
    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <= m;j++)
        {
            cin >> cc[i][j];
            arr[i][j] = cc[i][j] - '0';
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if(arr[i][j]!=0)
            {
                bfs(i, j);
                result++;
            }
        }
    }
    cout << result;
    return 0;
}