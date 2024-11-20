#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int j = 0; j < x; j++)
    {
        char str[10];
        scanf("%s", str);
        for (int i = 1; i <= 8; i++)
        {
            if (i != str[1] - '0')
            {
                printf("%c", str[0]);
                printf("%d", i);
                cout << endl;
            }
                }
        for (int i = 1; i <= 8; i++)
        {
            if (i + 'a' - 1 != str[0])
            {
                printf("%c", i + 'a' - 1);
                printf("%c\n", str[1]);
            }
        }
    }
    return 0;
}