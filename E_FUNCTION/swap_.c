#include <stdio.h>
int main() {
    int n;
    printf("enter teh number n : ");
    scanf("%d",&n);
    int r;
    printf("enter the number of r : ");
    scanf("%d", &r);
    int temp;
    temp=n;
    n=r;
    r=temp;

    printf("after the swapping the number of n is %d\n  the number of r is %d ",n,r);
    return 0;
}