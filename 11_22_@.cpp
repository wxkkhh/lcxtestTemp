#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct person
{
    int left;
    int right;
    int TorF;
} person[1000006]={0};

void push(int x,int i,int means)//x为要插的同学，i就是i；means为方向
{
    if(means==0)          //放x的左边
    {
        person[i].right = x;
        person[i].left = person[x].left;
        person[person[x].left].right = i;
        person[x].left = i;
    }
    if(means==1)          //放x的右边
    {
        person[i].left = x;
        person[i].right = person[x].right;
        person[person[x].right].left = i;
        person[x].right = i;
    }
}

int main()
{
    person[0].left = 0;
    person[0].right = 0;
    push(0, 1, 1);
    int n;
    int i;
    cin >> n;
    for ( i = 2; i <=n; i++)
    {
        int goal, means;
        cin >> goal >> means;
        push(goal, i, means);
    }
    int numPass;
    cin >> numPass;
    for ( i = 0; i <numPass; i++)
    {
        int mark;
        cin >> mark;
        person[mark].TorF = 1;
    }
    for ( i = person[0].right; i; i=person[i].right)
    {
        if(!person[i].TorF)
        {
            cout << i << " ";
        }
    }
    return 0;
}