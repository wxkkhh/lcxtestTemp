#include <bits/stdc++.h>
using namespace std;
int arr1[10000006];
int arr2[10000006];
int main()
{
    int i;
    int geshu;
    cin >> geshu;
    while (geshu--)
    {
        long long result = 0;
        int x, y;
        cin >> x >> y;
        for (i = 0; i < x; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < y; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + x);
        sort(arr2, arr2 + y);
        int n = 0;
        int l1 = 0, r1 = x - 1;
        int l2 = 0, r2 = y - 1;
        while (n != x)
        {
            if (fabs(arr1[l1] - arr2[r2]) > fabs(arr1[r1] - arr2[l2]))
            {
                result += fabs(arr1[l1] - arr2[r2]);
                l1++;
                r2--;
            }
            else
            {
                result += fabs(arr1[r1] - arr2[l2]);
                r1--;
                l2++;
            }
            n++;
        }
        cout << result << endl;
    }
}