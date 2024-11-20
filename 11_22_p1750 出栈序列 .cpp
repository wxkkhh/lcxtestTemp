#include <iostream>
#include <stack>
using namespace std;
stack<long long> p;
long long arr[10000007];
int main()
{
    int n, c, i;
    cin >> n >> c;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int daNa = 0;
    for (i = 0; i < n; i++)
    {
        if (p.empty())
        {
            p.push(arr[i]);
            daNa = i + 1;
        }
        else if (arr[i] < p.top())
        {
            for (; daNa <= i; daNa++)
            {
                p.push(arr[daNa]);
            }
        }
        if (p.size()+i-daNa+1==c||i==n-1)
        {
            cout << p.top() << " ";
            p.pop();
            i = daNa - 1;
        }
    }
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }

    return 0;
}