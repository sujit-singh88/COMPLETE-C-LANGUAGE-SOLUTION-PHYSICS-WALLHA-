#include <stdio.h>
int main() {
    int n;
    printf("enter the n");
    scanf("%d",&n);
    if(n%5==0){
        printf("yes! the number is disible by 5: %d ",n);
    }
    else
    printf("no! the number isnot  disible by 5  %d ",n);
    
    return 0;
}