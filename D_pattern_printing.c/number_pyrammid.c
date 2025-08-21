#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    // if n=4 then output target
    // 1234321
    // 123 321
    // 12   21
    // 1     1
    int nst = n;
    int nsp = 1;

    // first row
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    for (int i = n - 1; i >= 1; i--)
    {
        printf("%d", i);
    }
    printf("\n");

    // remaining rows
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 1;

        // left numbers ascending
        for (int j = 1; j <= nst - i; j++)
        {
            printf("%d", a);
            a++;
        }

        // middle spaces
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }

        // right numbers descending
        a = nst - i;
        for (int j = 1; j <= nst - i; j++)
        {
            printf("%d", a);
            a--;
        }

        nsp += 2;
        printf("\n");
    }

    return 0;
}
