#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int s=1;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d",s);
            s++;

        }
        printf("\n");
    }
    return 0;
}