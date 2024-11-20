#include <iostream>
#include <algorithm>
using namespace std;
long long a[100006] = {0}, b[1000006] = {0};
long long result = 0;
int main()
{
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for (i = 0; i < n; i++)
    {
        result += b[i] - a[i];
        if (b[i] > a[i + 1] && i != n - 1)
        {
            result += (a[i + 1] - b[i]);
        }
    }
    cout << result;
    return 0;
}