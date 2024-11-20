#include <iostream>
#include <cmath>
using namespace std;
int arr[1000006];

int main()
{
    int i = 0;
    char c;
    c = getchar();
    while (c != 'E')
    {
        if (c == 'W')
            arr[i] = 1;
        i++;
        c = getchar();
    }

    int n = i;
    int zhangsan = 0, lisi = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i])
            zhangsan++;
        else
            lisi++;
        if (zhangsan >= 11 && (zhangsan - lisi) >= 2)
        {
            cout << zhangsan << ':' << lisi << endl;
        }
        else if (lisi >= 11 && (lisi - zhangsan) >= 2)
        {
            cout << zhangsan << ':' << lisi << endl;
        }
        if (i == n - 1)
        {
            cout << zhangsan << ':' << lisi << endl;
        }
        else
        {
            zhangsan = 0;
            lisi = 0;
        }
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (arr[i])
            zhangsan++;
        else
            lisi++;
        if (zhangsan >= 21 && (zhangsan - lisi) >= 2)
        {
            cout << zhangsan << ':' << lisi << endl;
        }
        else if (lisi >= 21 && (lisi - zhangsan) >= 2)
        {
            cout << zhangsan << ':' << lisi << endl;
        }
        if (i == n - 1)
        {
            cout << zhangsan << ':' << lisi << endl;
        }
        else
        {
            zhangsan = 0;
            lisi = 0;
        }
    }
    return 0;
}