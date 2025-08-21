#include <stdio.h>

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int nst = n; // left and right numbers
    int nsp = 0; // middle spaces

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        // left numbers ascending
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }

        // middle spaces
        if (i > 1)
        {
            for (int k = 1; k <= nsp; k++)
            {
                printf(" ");
            }
        }

        // right numbers descending
        if (i == 1)
        {
            a--; // reset for first row
        }
        else
        {
            a--;
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a--;
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}
