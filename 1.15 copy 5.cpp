#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr1[1000006];
ll arr2[10000006];
ll result[1000006];
int main()
{
    int i;
    int geshu;
    cin >> geshu;
    int lcx = 0;
    for (lcx = 0; lcx < geshu;lcx++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        for (i = 0; i < x1; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < x2; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + x1);
        sort(arr2, arr2 + x2);
        ll sum = 0;
        if (x1 % 2 == 0)
        {
            for (i = 0; i < x1 / 2; i++)
            {
                sum += fabs(arr1[i] - arr2[x2 - i - 1]);
                sum += fabs(arr1[x1 - i - 1] - arr2[i]);
            }
        }
        else
        {
            for (i = 0; i < x1 / 2; i++)
            {
                sum += fabs(arr1[i] - arr2[x2 - i - 1]);
                sum += fabs(arr1[x1 - i - 1] - arr2[i]);
            }
            int temp1 = fabs(arr1[x1 / 2] - arr2[x2 - 1 - x1 / 2]);
            int temp2 = fabs(arr1[x1 / 2] - arr2[x1 / 2]);
            int temp3 = max(temp1, temp2);
            sum += temp3;
        }
        //cout << sum << endl;
        result[lcx] = sum;
    }
    for ( i = 0; i < geshu; i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}