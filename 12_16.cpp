#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <iostream>
using namespace std;
char arr[1500][1500];
int isFangwenGuo[1500][1500];
int fx[5] = {0, 1, 0, -1, 0};
int fy[5] = {0, 0, 1, 0, -1};
int step[1500][1500];
int laiguodehang[10000006];
int laiguodelie[10000006];
long long result;
int n, m;

struct point
{
    int h;
    int l;
};

long long bfs(int hang, int lie)
{
    int flag = 0;
    long long ans = 0;
    queue<point> r;
    point temp;
    temp.h = hang;
    temp.l = lie;
    r.push(temp);
    ans++;
    flag++;
    isFangwenGuo[hang][lie] = 1;
    laiguodehang[flag] = hang;
    laiguodelie[flag] = lie;
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
            if (temp2.h > n || temp2.h < 1 || temp2.l > n || temp2.l < 1)
            {
                continue;
            }
            if (arr[temp2.h][temp2.l] == arr[hangjin][liejin] || isFangwenGuo[temp2.h][temp2.l])
            {
                continue;
            }

            isFangwenGuo[temp2.h][temp2.l] = 1;
            ans++;
            flag++;
            laiguodehang[flag] = temp2.h;
            laiguodelie[flag] = temp2.l;
            r.push(temp2);
        }
    }
    for (int jj = 1; jj <= flag; jj++)
    {
        step[laiguodehang[jj]][laiguodelie[jj]] = ans;
    }

    return ans;
}

int main()
{
    cin >> n >> m;
    int i = 0, j = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        int hang, lie;
        scanf("%d%d", &hang, &lie);
        if (step[hang][lie] == 0)
        {
            result = bfs(hang, lie);
            cout << result << endl;
        }
        else
        {
            cout << step[hang][lie]<<endl;
        }
    }
    return 0;
}