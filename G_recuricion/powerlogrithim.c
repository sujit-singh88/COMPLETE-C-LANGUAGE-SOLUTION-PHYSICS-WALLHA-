#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 1) return a;
   int sujit= powerlog(a, b / 2) ;
    if(b%2==0){
        return sujit* sujit;
}
if (b % 2 != 0)
{
    return sujit * sujit * a;
}

}
int main()
{ 
    int a, b;
    printf("enter the number a enter the number b : ");
    scanf("%d%d", &a, &b);
    int p = powerlog(a, b);
    printf("%d raised to the power %d is %d", a, b, p);
    return 0;
}