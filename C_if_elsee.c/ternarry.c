#include <stdio.h>
int main() {
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    n%2==0 ? printf("even number") : printf("odd number");
    // if(n%2==0)
    // {
    //     printf("even number");

    // }
    // else{
    //     printf("odd number");
    // }

    return 0;
}