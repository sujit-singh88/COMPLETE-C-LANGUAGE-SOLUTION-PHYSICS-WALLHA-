#include <stdio.h>
int main() {
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int nsp =n/2;
    int nst = 1; 
    int  ml = n/2 + 1;
    for (int i=1; i<=n; i++){
    for (int j=1; j<=nsp; j++ ){
        printf(" ");
    }
    for (int k=1;k<=nst; k++  ){
        printf("*");
    }
    if(i<ml){
        nsp--;
        nst+=2;
    }
    else {
    nsp++;
    nst-=2; 
     }
    printf("\n");
   }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int nsp = n / 2;    // spaces
//     int nst = 1;        // stars
//     int ml = n / 2 + 1; // middle line

//     for (int i = 1; i <= n; i++)
//     {
//         // spaces
//         for (int j = 1; j <= nsp; j++)
//         {
//             printf(" ");
//         }
//         // stars
//         for (int k = 1; k <= nst; k++)
//         {
//             printf("*");
//         }

//         // logic to increase/decrease
//         if (i < ml)
//         {
//             nsp--;
//             nst += 2;
//         }
//         else
//         {
//             nsp++;
//             nst -= 2;
//         }

//         printf("\n");
//     }

//     return 0;
// }
