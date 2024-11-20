#include <iostream>
#include <cmath>
using namespace std;
double min = 1e-1;
int main()
{
    double x1 = 0, x2 = 0, x3 = 0;
    double y = 0;
    double min = 1000000;
    double x1min = 0, x2min = 0, x3min = 0;
    for (x2 = 0; x2 < 2; x2 += 0.001)
    {
        x3 = sqrt((3.0 - x2) / 2.0);
        x1 = 2 - x2;
        if (-x1 * x1 - x2 + x3 * x3 > 0)
            continue;
        if (x1 + x2 * x2 + x3 * x3 - 20 > 0)
            continue;
        y = x1 * x1 + x2 * x2 + x3 * x3 + 8;
        if (min > y)
        {
            min = y;
            x1min = x1;
            x2min = x2;
            x3min = x3;
        }
    }
    cout << min << endl;
    cout << x1min << " " << x2min << " " << x3min << " " << endl;
}