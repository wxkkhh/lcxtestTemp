

#include <bits/stdc++.h>
using namespace std;
int arr[1010][1010];
int isFangwenGuo[1010][1010];
int xfangxiang[5] = {0, 1, 0, -1, 0}; // 方向
int yfangxiang[5] = {0, 0, 1, 0, -1};
int n, m, result;
struct point
{
    int x;
    int y;
    int hurt;
};


int niXingBuXingA(int xstart, int ystart, int maxShiYiShi)
{
    queue<point> duilie;
    memset(isFangwenGuo, 0, sizeof(isFangwenGuo));
    point temp;
    temp.x = xstart;
    temp.y = ystart;
    temp.hurt = 0;
    duilie.push(temp);
    isFangwenGuo[temp.x][temp.y] = 1;
    while (duilie.size())
    {
        point temp2;

        int xx = duilie.front().x;
        int yy = duilie.front().y;
        duilie.pop();

        for (int kk = 1; kk <= 4; kk++)
        {
            temp2.x = xx + xfangxiang[kk];
            temp2.y = yy + yfangxiang[kk];
            temp2.hurt = arr[temp2.x][temp2.y];
            if (temp2.x > n || temp2.x < 1 || temp2.y > m || temp2.y < 1 || isFangwenGuo[temp2.x][temp2.y] || temp2.hurt > maxShiYiShi)
            {
                continue;
            }
            isFangwenGuo[temp2.x][temp2.y] = 1;

            if (temp2.x == n)
            {

                return 1;
            }
            else
            {
                duilie.push(temp2);
            }
        }
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    int i, j;
    int maxHurt = -1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
            if (maxHurt < arr[i][j])
                maxHurt = arr[i][j];
        }
    }
    int left = 0, right = maxHurt+1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (niXingBuXingA(1, 1, mid))
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << result;
    /*if (niXingBuXingA(1, 1, 8))
    {
        cout << "okkk";
    }*/
    return 0;
}