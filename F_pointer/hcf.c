// #include <stdio.h>
// int min (int a, int b){
//     if (a<b)
//     return a;
//     else return b;
// }
// int gcd(int a, int b ){
//     int hcf;
//     for (int i=min(a,b); i >=1; i--){
//          if(a%i==0&& b%i==0){
//             hcf = 1;
//             break;;
//          }
//     }
// }
// int main() {
//     int a;
//     printf("enter the 1st number : ");
//     scanf("%d",a);
//     int b;
//     printf("enter the 2st number : ");
//     scanf("%d", b);
//     int hcf = gcd (a,b);
//     printf("the hcf/gcd of %d and %d is : %d",a,b,hcf);
//     return 0;
// }
#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a, b;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf("The HCF/GCD of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
