#include <stdio.h>
int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    char ch='A';
    for (int i=1; i<=2*n+1; i++){
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=nst; j++){
            printf("%c ",ch);
            ch++;
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
            ch++;
        }
        for(int j=1; j<=nst; j++){
            printf("%c ",ch);
            ch++;
        }
        nst--;
        nsp+=2;
        printf("\n");

    }
    return 0;
}