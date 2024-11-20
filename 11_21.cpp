#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ans;
        cin >> ans;
        if(ans==1)
        {
            int shu;
            cin >> shu;
            q.push(shu);
        }
        if(ans==2)
        {
            cout << q.top()<<endl;
        }
        if(ans==3)
        {
            q.pop();
        }
    }
    return 0;
}