#include <stdio.h>
int main()
{
    int n;
    printf("entr the number");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number: ");
//     scanf("%d", &n);
//     int a = 1; // start with 1
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", a);
//             a += 2; // jump to next odd number
//         }
//         printf("\n");
//     }
//     return 0;
// }
