#include <stdio.h>
int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    //if n=4 then output traget
    // 1234567
    // 123 567
    // 12   67
    // 1     7
    int nst=n;
    int nsp=1;
    for(int i=1; i<=2*n+1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        int a=1;
        for (int j=1; j<=nst; j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp; k++){
            printf(" ");
            a++;
        }
        for(int j=1; j<=nst; j++){
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }

    return 0;
}