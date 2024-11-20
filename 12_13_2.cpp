#include <iostream>
#include <cmath>
using namespace std;
void pilipala(int a)
{
    for (int i = 18; i >= 0; i--)
    {
        if (pow(2, i) <= a)
        {
            if (i == 0)
                cout << "2(0)";
            else if (i == 1)
                cout << "2";

            else
            {
                cout << "2(";
                pilipala(i);
                cout << ")";
            }

            a -= (pow(2, i));
            if (a)
                cout << "+";
        }
    }
}
int main()
{
    int asd;
    cin >> asd;
    pilipala(asd);
    return 0;
}
