#include <stdio.h>
int main() {
       int n;
       printf("enter the number : ");
       scanf("%d",&n);
       int originalnumbeer=n;
       int r=0;
       while(n>0){
        r =r *10;
        r = r + (n % 10);
        n = n / 10;
       }
       printf("the reverse and sum of number is : %d", originalnumbeer+r);
    return 0;
}