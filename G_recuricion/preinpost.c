#include <stdio.h>
void preinpost(int n){
    if(n==0) return ;
    printf("pre %d\n",n);
    preinpost(n-1);
    printf("in %d\n",n);
    preinpost(n - 1);
    printf("post %d\n", n);
    return;
}
int main()
{
    int n;
    printf("enter trhe number ");
    scanf("%d", &n);
     preinpost(n);
    printf("%d", preinpost);
    return 0;
}