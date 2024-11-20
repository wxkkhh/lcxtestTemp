#include <iostream>
#include <cmath>
using namespace std;
struct person
{
    char name[50];
    int chaoxiang;
} arr[1000006];

int main()
{
    int result = 1;
    int n, i;
    int zhiling;
    cin >> n;
    cin >> zhiling;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i].chaoxiang >> arr[i].name;
    }
    for (i = 0; i < zhiling; i++)
    {
        int fangxiang, yiDongDeWeiShu;
        cin >> fangxiang >> yiDongDeWeiShu;
        if (arr[result].chaoxiang != fangxiang)
        {
            result += yiDongDeWeiShu;
        }
        else
        {
            result -= yiDongDeWeiShu;
        }
        while (result < 1)
        {
            result = n + result;
        }
        while (result > n)
        {
            result = result - n;
        }
    }
    cout << arr[result].name;
    return 0;
}