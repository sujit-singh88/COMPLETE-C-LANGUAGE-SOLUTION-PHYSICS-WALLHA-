#include <stdio.h>
int main()
{
    int sujit [5] [5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &sujit[i][j]);
        }
    }
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", sujit[i][j]);
        }
        printf("\n");
    }
    return 0;
}