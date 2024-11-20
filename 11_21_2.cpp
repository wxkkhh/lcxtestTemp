#include <iostream>
#include <queue>
using namespace std;
long long result = 0;
int main()
{
    priority_queue<int, vector<int>, greater<int>> p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        p.push(a);
    }
    for (int i = 0; i < n-1; i++)
    {
        long long temp1 = p.top();
        p.pop();
        long long temp2 = p.top();
        p.pop();
        result += (temp1 + temp2);
        p.push(temp1 + temp2);
    }
    cout << result;
}