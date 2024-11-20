#include <iostream>
#include <algorithm>
using namespace std;
long long arr[1000];
int main()
{
    int i = 0;
    char c;
    c = getchar();
    int pan = 1;
    while (c != '@')
    {
        if (c >= '0' && c <= '9')
        {
            if(!pan)
            {
                i++;
            }
            arr[i] *= 10;
            arr[i] += c - '0';
            pan = 1;
        }
        else if (c == '.')
        {
            i++;
            pan = 1;
        }
        else if (c == '+')
        {
            if(pan)
            {
                i--;
                pan = 0;
            }
            arr[i - 1] += arr[i];
            arr[i] = 0;
            i--;
        }
        else if (c == '-')
        {
            if (pan)
            {
                i--;
                pan = 0;
            }
            arr[i - 1] -= arr[i];
            arr[i] = 0;
            i--;
        }
        else if (c == '*')
        {
            if (pan)
            {
                i--;
                pan = 0;
            }
            arr[i - 1] *= arr[i];
            arr[i] = 0;
            i--;
        }
        else if (c == '/')
        {
            if (pan)
            {
                i--;
                pan = 0;
            }
            arr[i - 1] /= arr[i];
            arr[i] = 0;
            i--;
        }
        c = getchar();
    }
    cout << arr[0];
    return 0;
}