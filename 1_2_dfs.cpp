#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int fang[1000][1000];
int isFangwenGuo[1000];
int n;
int result = 0;
int endd[1000];
int path[1000];
int length = 0;

void dfs(int x,int geshu,int lei)
{
    int i;
    int pan = 0;
    for ( i = 1; i < n; i++)
    {
        if(fang[x][i]&&!isFangwenGuo[i])
            pan = 1;
    }
    if(pan==0)
    {
        if(lei>result)
        {
            result = lei;
            length = geshu;
            for ( i = 1; i <=geshu ; i++)
            {
                endd[i] = path[i];
            }
        }
    }
    for ( i = 1; i <= n; i++)
    {
        if(fang[x][i]==1&&isFangwenGuo[i]==0)
        {
            isFangwenGuo[i] = 1;
            path[geshu+1] = i;
            dfs(i, geshu + 1, lei + arr[i]);
            isFangwenGuo[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    int i,j;
    for ( i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for ( i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n;j++)
        {
            cin >> fang[i][j];
        }
    }
    for ( i = 1; i <= n; i++)
    {
        path[1] = i;
        dfs(i, 1, arr[i]);
    }
    for ( i = 1; i <=length; i++)
    {
        cout << endd[i]<<' ';
    }
    cout << endl;
    cout << result;
    return 0;
}