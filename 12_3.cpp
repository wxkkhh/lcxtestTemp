#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#define ll long long
using namespace std;

ll a = 0, b = 0, mod = 0;

ll ksm(ll x, ll t) 
{
    ll ans = 1;
    while (t > 0)
    {
        if (t & 1LL)
            ans = ans * x % mod;
        x = x * x % mod;
        t >>= 1;
    }
    return ans;
}

int main()
{
    cin >> a >> b >> mod;
    ll result = 0;
    result = ksm(a, b);
    cout << a << "^" << b << " mod " << mod << "=" << result;
    return 0;
}