#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b;
    cin >> a >> b >> n;
    if (n * b <= a)
        cout << n * b;
    else
        cout << a / b * b;
    return 0;
}
