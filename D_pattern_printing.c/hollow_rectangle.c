#include <stdio.h>
int main()
{
    int n,k;
    printf("enter the number row : ");
    scanf("%d", &n);
    printf("enter the number collon : ");
    scanf("%d", &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j == 1 ||i==n||j==k || i == 1)
            {
                printf("*");
            }
            else
                printf(" ");
        } 
        printf("\n");
    }
    return 0;
}