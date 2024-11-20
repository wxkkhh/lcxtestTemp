#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0, x = 0;
    cin >> ans;
    n--;
    while (n--)
    {
        cin >> x;
        if (x < 0)
            x *= -1;
        ans = gcd(ans, x);
    }
    cout << ans;
}