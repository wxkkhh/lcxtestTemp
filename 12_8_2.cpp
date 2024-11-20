#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int i;
    long long mark = 0;
    long long w = pow(n, n);
    for (i = n; i <w ; i += 10)
    {
        if((i%k)%n==0)
        {
            mark++;
        }
    }
    cout << mark;
    return 0;
}