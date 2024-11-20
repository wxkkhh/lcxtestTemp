#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char str1[1000006];
char str2[1000006];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        cin >> str1 >> str2;
        int i;
        int sum1 = 0, sum2 = 0;
        for (i = 0; i < x; i++)
        {
            if (str1[i] != str2[i])
            {
                if (str1[i] == '1')
                    sum1++;
                if (str2[i] == '1')
                    sum2++;
            }
        }
        int ans = max(sum1, sum2);
        cout << ans << endl;
    }
    return 0;
}