#include <stdio.h>
int main() {
    int n;
    printf("enter the number");
    scanf("%d",&n);
    float a=100;
    for(int i=1; i<=n; i++){
    printf("%f\n",a);
    //  a= a*1/2;
     a= a/2;
    }
    return 0;
}