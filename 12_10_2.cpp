#include<iostream>
#include<cmath>
using namespace std;
int a[1000006];
int b[1000006];
int fenshu[5][5] = {{0, 0, 1, 1, 0}, {1, 0, 0, 1, 0}, {0, 1, 0, 0, 1}, {0, 0, 1, 0, 1}, {1, 1, 0, 0, 0}};
int main()
{
    int n, aNUM, bNUM;
    int agrade = 0, bgrade = 0;
    cin >> n >> aNUM >> bNUM;
    int i;
    for (i = 0; i < aNUM; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < bNUM;i++)
    {
        cin >> b[i];
    }
    for ( i = 0; i < n; i++)
    {
        agrade += fenshu[a[i % aNUM]][b[i % bNUM]];
        bgrade += fenshu[b[i % bNUM]][a[i % aNUM]];
    }
    cout << agrade << ' ' << bgrade;
    return 0;
}