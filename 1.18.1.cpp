#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
priority_queue<int, vector<int>> big;
priority_queue<int, vector<int>, greater<int>> small;

int main()
{
    int n, x;
    int bigNum = 0, smallNum = 0;
    cin >> n;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        big.push(x);
        bigNum++;
    }

    while (bigNum > (n >> 1))
    {
        int temp = big.top();
        small.push(temp);
        big.pop();
        bigNum--, smallNum++;
    }
    string YaoQiu;
    int jieXiaLaiDeCiShu = 0;
    cin >> jieXiaLaiDeCiShu;
    while (jieXiaLaiDeCiShu--)
    {
        cin >> YaoQiu;
        if (YaoQiu[0] == 'a')
        {
            n++;
            int temp2 = 0;
            cin >> temp2;
            if (temp2 > big.top())
            {
                small.push(temp2);
                smallNum++;
            }
            else
            {
                big.push(temp2);
                bigNum++;
            }
        }
        else
        {
            while (bigNum > (n + 1) >> 1)
            {
                int temp3 = big.top();
                small.push(temp3);
                big.pop();
                bigNum--, smallNum++;
            }
            while (smallNum > n >> 1)
            {
                int temp4 = small.top();
                big.push(temp4);
                small.pop();
                bigNum++, smallNum--;
            }
            cout << big.top() << endl;
        }
    }
    return 0;
}