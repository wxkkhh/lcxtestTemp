#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void exchange(char *a, char *b)
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
void maopao(char a[][9])
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (strcmp(a[j], a[j + 1]) > 0)
                exchange(a[j], a[j + 1]);
        }
    }
}
int main()
{
    int i;
    char arr[5][9];
    for (i = 0; i < 5; i++)
    {
        scanf("%s", arr[i]);
    }
    maopao(arr);
    printf("排序后的五个名字为\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s", arr[i]);
        printf("\n");
    }
    return 0;
}