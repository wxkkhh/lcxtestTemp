#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000006];
int brr[1000006];
int crr[1000006];
int drr[1000006];
double result=0;

int main()
{
    int a, b, c, d;
    int i;
    cin >>a >> b >> c >> d;
    for ( i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for ( i = 0; i < b; i++)
    {
        cin >> brr[i];
    }
    for ( i = 0; i < c; i++)
    {
        cin >> crr[i];
    }
    for ( i = 0; i < d; i++)
    {
        cin >> drr[i];
    }
    sort(arr, arr + a, greater<int>());
    sort(brr, brr + b, greater<int>());
    sort(crr, crr + c, greater<int>());
    sort(drr, drr + d, greater<int>());

    int n;
    cin >> n;
    int j;
    int a1=0, b1=0, c1=0, d1=0;
    int b2, c2, d2;
    for ( j = 0; j < n; j++)
    {
        cin >> b2 >> c2 >> d2;
        for ( i = a1; i < a1+1; i++)
        {
            result += arr[i];
        }
        for ( i = b1; i < b1+b2; i++)
        {
            result += brr[i];
        }
        for ( i = c1; i < c1+c2; i++)
        {
            result += crr[i];
        }
        for ( i = d1; i < d1+d2; i++)
        {
            result += drr[i];
        }
        printf("%.2lf\n", result/11.0);
        result = 0;
        a1 += 1;
        b1 += b2;
        c1 += c2;
        d1 += d2;
    }
    return 0;
}