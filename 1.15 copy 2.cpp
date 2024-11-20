#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int n;
    int i;
    while (n--)
    {
        char arr1[100006];
        char arr2[100006];
        int sum1 = 0, sum2 = 0;
        int x;
        cin >> x;
        getchar();
        scanf("%s", arr1);
        getchar();
        scanf("%s", arr2);

        for (i = 1; i <= x; i++)
        {
            if (arr1[i] != arr2[i])
            {
                if (arr1[i] == '1')
                    sum1++;
                if (arr2[i] == '1')
                    sum2++;
            }
        }
        int ans = max(sum1, sum2);
        cout << ans << endl;
    }
    return 0;
}