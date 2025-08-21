// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter the number the n");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//         printf("the given number is composite\n");
//        break;
//     }
// }
// if(a==0)
// printf("the given number is prime\n");
// else printf("the number is composite\n");
//     return 0;
// }
#include <stdio.h>
int main() {
    int n, a = 0;
    printf("Enter the number n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("The number is neither prime nor composite\n");
        return 0;
    }

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            a = a+1; // Composite found
            break;
        }
    }

    if (a == 0)
        printf("The given number is prime\n");
    else
        printf("The given number is composite\n");

    return 0;
}
