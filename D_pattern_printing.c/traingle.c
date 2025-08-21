// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the numer : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= n+1-i; j++)
//         { if(j%2==0){
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c ", ch);
//            a++;}
//            else{
//             printf("%d", i);
//            }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number : ");
//     if (scanf("%d", &n) != 1)
//         return 0;

//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 int d = a + 64;
//                 char ch = (char)d;
//                 printf("%c ", ch);
//                 a++;
//             }
//             else
//             {
//                 printf("%d ", i); // <-- space added here
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1; // alphabet counter (हर लाइन पर reset)
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             if (j % 2 == 0) // even position → alphabet
//             {
//                 char ch = 'A' + (a - 1);
//                 printf("%c ", ch);
//                 a++;
//             }
//             else // odd position → number
//             {
//                 printf("%d ", i); // space add किया
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    char ch = 'A'; // alphabets start from A

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) // Odd line → numbers
        {
            for (int j = 1; j <= i; j++)
            {     
                printf("%d ", j);
            }
        }
        else // Even line → alphabets
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}
  