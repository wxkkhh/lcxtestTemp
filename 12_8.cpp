#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;
long long arr[10000007];
int main()
{
    int i;
    int result=0;
    int n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    result = arr[0];
    for ( i = 1; i < n; i++)
    {
        result = result ^ arr[i];
    }
    long long daan = 0 ^ result;
    cout << daan << ' ' << '0';

    return 0;
}