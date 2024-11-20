#include <stdio.h>
#include <string.h>
char str[10000][100];
char result[10000];
int strpei[10000];

int main()
{
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        scanf("%d", &strpei[i]);
    }
    int m = 0;
    for (i = 0; i < x; i++)
    {
        char c;
        c = getchar();
        int k = 0;
        while (c != '\n')
        {
            result[k] = c;
            c = getchar();
            k++;
        }
        result[k] = '\0';

        char strtemp[1000];
        int length = strlen(result);
        for (m = 0; m < length; m++)
        {
            j = m;
            if (result[j] == '{')
            {
                int k = 0;
                while (result[j] != '}')
                {
                    j++;
                    strtemp[k] = result[j];
                    k++;
                    m = j;
                }
                strtemp[k - 1] = '\0';

                for (int l = 0; l < n; l++)
                {
                    if (strcmp(strtemp, str[l]) == 0)
                    {
                        printf("%d", strpei[l]);
                        break;
                    }
                }
                strcpy(strtemp, "\0");
            }
            else if (result[m] != '\n' && result[m] != '\r')
            {
                printf("%c", result[m]);
            }
        }
        printf("\n");
    }
    return 0;
}