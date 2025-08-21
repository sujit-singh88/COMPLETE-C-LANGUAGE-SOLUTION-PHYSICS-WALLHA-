#include <stdio.h>
int main() {
    int n;
    printf("enter the n");
    scanf("%d",&n);
    if(n%2==0){
        printf("you entred even number : %d ",n);
    }
    else
    printf("you entred odd number: %d ",n);
    
    return 0;
}