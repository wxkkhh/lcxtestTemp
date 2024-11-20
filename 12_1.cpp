#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod;

ll ksm(ll x, ll t)       //超级厉害的快速幂，注意mod
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

ll olaHanShu(ll x)    //一个简单的欧拉函数，虽然大部分是我抄的
{
    ll i = 0;
    ll n = x;
    ll m = x;
    for (i = 2; i * i <= m; i++)
    {
        if (x % i == 0)
        {
            n = n / i * (i - 1);
            while (x % i == 0)
            {
                x /= i;
            }
        }
    }
    if (x > 1)
    {
        n = n / x * (x - 1);
    }
    return n;
}

ll read(ll modCHULI) // 我最强的快读
{
    int mark = 0;
    ll x = 0, f = 1;
    char ch;
    ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = (x << 3) + (x << 1) + (ch ^ 48);
        if(x>=modCHULI)
        {
            mark = 1;
        }
        x %= modCHULI;
        ch = getchar();
    }
    if(mark)                      //这里根据欧拉函数进行了改进
    {
        return x * f + modCHULI;
    }
    return x * f;
}

int main()
{
    ll a, b;
    cin >> a >> mod;
    b = read(olaHanShu(mod));
    cout<<ksm(a, b);
    return 0;
}
