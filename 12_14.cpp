#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[500];
long long result = 0;
int main()
{
    int n;
    cin >> n;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n + 1);
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        result += pow(arr[n - i] - arr[i], 2) ;
    }
    for (int i = n; i > (n + 1) / 2; i--)
    {
        result += pow(arr[i] - arr[n - i + 1], 2) ;
    }
    cout << result;
    return 0;
}