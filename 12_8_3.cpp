#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int arr[10000][1000];
int fen[10000];
int daan[10000];

int main()
{
    int x;
    int i;
    cin >> x;

    for ( i = 0; i < x; i++)
    {
        int dasda = 0;
        cin >> dasda;
        for (int j = 0; j < dasda;j++)
        {
            cin >> arr[i][j];
        }
        cin >> fen[i];
    }
    int geshu;
    cin >> geshu;
    for ( i = 0; i <geshu; i++)
    {
        cin >> daan[i];
    }
    cout << daan[geshu - 1];
}