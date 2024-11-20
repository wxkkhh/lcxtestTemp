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
        if (c != '\n' && c != '\r')
            i++;
        c = getchar();
    }

    int n = i;
    int zhangsan = 0, lisi = 0;
    int mark = 0;
    if (n == 0)
    {
        cout << "0:0" << endl;
        cout << endl;
        cout<< "0:0";
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i])
            zhangsan++;
        else
            lisi++;
        if (zhangsan >= 11 && (zhangsan - lisi) >= 2)
        {
            mark = 1;
            cout << zhangsan << ':' << lisi << endl;
        }
        else if (lisi >= 11 && (lisi - zhangsan) >= 2)
        {
            mark = 1;
            cout << zhangsan << ':' << lisi << endl;
        }
        if (i == n - 1 && mark)
        {
            cout << 0 << ':' << 0 << endl;
        }
        if (i == n - 1 && mark == 0)
        {
            mark = 1;
            cout << zhangsan << ':' << lisi << endl;
        }
        else if (mark)
        {
            zhangsan = 0;
            lisi = 0;
            mark = 0;
        }
    }
    zhangsan = 0;
    lisi = 0;
    mark = 0;
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
            mark = 1;
        }
        else if (lisi >= 21 && (lisi - zhangsan) >= 2)
        {
            mark = 1;
            cout << zhangsan << ':' << lisi << endl;
        }
        if (i == n - 1 && mark)
        {
            cout << 0 << ':' << 0 << endl;
        }
        if (i == n - 1 && mark == 0)
        {
            mark = 1;
            cout << zhangsan << ':' << lisi << endl;
        }
        else if (mark)
        {
            zhangsan = 0;
            lisi = 0;
            mark = 0;
        }
    }
    return 0;
}