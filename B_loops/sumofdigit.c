#include <stdio.h>
int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=0;
    int lastdigit=0;
    while(n>0){
    lastdigit=n%10;
    sum=sum+lastdigit;
    n=n/10;
    }
    printf("the sum of digit are %d",sum);
    return 0;
}