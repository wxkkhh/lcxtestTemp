#include <iostream>

#include <algorithm>

using namespace std;

int arr[10000007];
int result = 0;
int main()
{
    int n, c;
    cin >> n >> c;
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);    //升序排列
    int temp = -10086;
    int last = 0;
    for (int i = n-1; i>=0; i--)
    {
        if(temp == arr[i] - c)
        {
            result += last;
        }
        else 
        {
            temp = arr[i] - c;
            if (temp < 0)
                break;
            int *p = lower_bound(arr, arr + n, temp);
            while (*p == temp)
            {
                last++;
                p++;
            }
            result += last;
        }
    }
    cout << result;
    return 0;
}