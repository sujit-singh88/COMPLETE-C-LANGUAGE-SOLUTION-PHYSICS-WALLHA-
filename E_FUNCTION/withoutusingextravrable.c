#include <stdio.h>
int swap(int a, int b){
    a = a+b;
    b=a-b;
    a=a-b;
    return;
}
    int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int b;
    printf("enter the number b ");
    scanf("%d",&b);
    // swap(a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after the swapping\n the value of a is %d\n the value of b is %d",a,b);
    return 0;
}