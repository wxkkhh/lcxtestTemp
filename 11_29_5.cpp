#include <iostream>
#include <map>
#include<algorithm>
#include<cstring>
#include <vector>
using namespace std;

map<string, int> laomuochutiren;
string name;
vector<string> str;

int main()
{
    int n = 0;
    int renshu = 0;
    cin >> n;
    int i = 0;
    int result = 0;
    for (i = 0; i < n; i++)
    {
        cin >> renshu;
        for (int j = 0; j < renshu; j++)
        {
            cin >> name;
            if (laomuochutiren.find(name) != laomuochutiren.end())
            {
                laomuochutiren[name]++;
            }
            else
            {
                laomuochutiren[name] = 1;
            }
            if (laomuochutiren[name] ==n)
            {
                str.push_back(name);
                result++;
            }
        }
    }
    sort(str.begin(), str.end());
    cout << result << endl;

    for ( i = 0; i < result; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}