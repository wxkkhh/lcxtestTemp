#include<stdio.h>
main()
{
    struct st
    {
        int n;
        char name[10];
    };
    struct st a[3]={5,"ll",7,"wang",9,"Zha"},*p;
    p = a;
    //printf("%d\n", p++->n);
    printf("%d\n", p->n++);
    //printf("%d\n", (*p).n++);
    //printf("%d\n", ++p->n);

    return 0;
}