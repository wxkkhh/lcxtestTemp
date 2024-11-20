#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long value[100000];
long long weight[100000];
long long result[10000007];
int main()
{
    int n, i, j;
    int maxWeight = 0;
    cin >>maxWeight>>n;
    for (i = 1; i <= n; i++)
    {
        cin >> weight[i] >> value[i];
    }

    for (i = 1; i <= n; i++)
    {
        for (j = weight[i]; j<=maxWeight; j++)  
        {
            result[j] = max(result[j], result[j - weight[i]] + value[i]);
        }
    }
    cout << result[maxWeight];
    return 0;
}