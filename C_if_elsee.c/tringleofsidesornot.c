#include <stdio.h>
int main() {
    int a,b,c;
    printf ("enter the 1st side : ");
    scanf("%d",&a);
    printf ("enter the 2end side : ");
    scanf("%d",&b);
    printf ("enter the 3rd side : ");
    scanf("%d",&c);
    if(a+b>c&& a+c>b && b+c>a ){
        printf("valid triangle");
    }
    else{
        printf("not a triangle");
    }
    return 0;
}