#include <iostream>
#include <stack>
using namespace std;
stack<int> p;
int arr[1000006];
int brr[1000006];
int main()
{
    int n;
    cin >> n;
    int i;
    int j;
    int k;
    for ( i = 0; i < n; i++)
    {
        int length = 0;
        cin >> length;
        for ( j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        for ( j = 0; j < length; j++)
        {
            cin >> brr[j];
        }
        k=0;
        for ( j = 0; j < length; j++)
        {
            p.push(arr[j]);
            while (p.top()==brr[k])
            {
                p.pop();
                k++;
                int sSize = p.size();
                if (sSize == 0)
                    break;
            }
        }
        int sSize = p.size();
        if(sSize==0)
            cout << "Yes" << endl;
        else
            cout << "No"<< endl;
        while (!p.empty())
        {
            p.pop();
        }
        
    }
    return 0;
}