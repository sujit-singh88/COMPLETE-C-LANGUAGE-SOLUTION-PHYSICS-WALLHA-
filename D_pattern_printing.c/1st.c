#include <stdio.h>
int main() {
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;  i<=n;i++){
        for(int i=1; i<=n; i++){
        printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}