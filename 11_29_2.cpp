#include <iostream>
#include <algorithm>
using namespace std;
long long arr[1000006];
long long dui[1000006];
int n, k;

void whereMax()
{
    int head = 1, tail = 0;
    for (int i = 1; i <= n; i++)
    {
        while (head <= tail && dui[head] <= i - k)
            head++;
        while (head <= tail && arr[dui[tail]] < arr[i])
            tail--;
        dui[++tail] = i;
        if (i >= k)
            cout << arr[dui[head]] << ' ';
    }
    cout << endl;
}

void whereMin()
{
    int head = 1, tail = 0;
    for (int i = 1; i <= n; i++)
    {
        while (head <= tail && dui[head] <= i - k)
            head++;
        while (head <= tail && arr[dui[tail]] > arr[i])
            tail--;
        dui[++tail] = i;
        if (i >= k)
            cout << arr[dui[head]] << ' ';
    }
    cout << endl;
}

int main()
{
    cin >> n >> k;
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    whereMin();
    whereMax();
    return 0;
}