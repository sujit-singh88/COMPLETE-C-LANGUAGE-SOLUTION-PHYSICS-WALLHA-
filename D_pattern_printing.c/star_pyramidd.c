// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int nst = n; // left side stars
//     int nsp = 0; // spaces between stars

//     for (int i = 1; i <= n; i++)
//     {
//         // left stars
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("*");
//         }
//         // spaces
//         for (int k = 1; k <= nsp; k++)
//         {
//             printf(" ");
//         }
//         // right stars
//         for (int j = 1; j <= nst; j++)
//         {
//             printf("*");
//         }

//         nst--;    // stars kam hote jaayenge
//         nsp += 2; // spaces badhte jaayenge
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    //*** ****
    //**    **
    //*      *
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    { 
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){
            printf("*");//for star
        }
        for (int k=1; k<=nsp; k++){
            printf(" "); // for spaces
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("*"); // for star
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}
