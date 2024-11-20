#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int main()
{
    int i = 0;
    char c;
    c = getchar();
    while (c != '@')
    {
        if (c >= '0' && c <= '9')
        {
            arr[i] *= 10;
            arr[i] += c - '0';
        }
        else if (c = '.')
        {
            i++;
        }
        else if (c = '+')
        {
            arr[i - 1] += arr[i];
            arr[i] = 0;
            i--;
        }
        else if (c = '-')
        {
            arr[i - 1] -= arr[i];
            arr[i] = 0;
            i--;
        }
        else if (c = '*')
        {
            arr[i - 1] *= arr[i];
            arr[i] = 0;
            i--;
        }
        else if (c = '/')
        {
            arr[i - 1] /= arr[i];
            arr[i] = 0;
            i--;
        }
        c = getchar();
    }
    cout << arr[0];
}