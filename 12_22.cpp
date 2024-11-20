#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 2, c = 3, d = 5;
    cout << (a > b ? a : c < d ? c
                               : d);
}