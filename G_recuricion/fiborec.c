// #include <stdio.h>
// int fibo (int n){
//     if (n==1|| n==2) return 1;
//     int ans1=fibo(n-1);
//     int ans2=fibo(n-2);
//     int ans = ans1 + ans2;
//     return ans;
// }
// int main()
// {
//     int n;
//     printf("enter trhe number ");
//     scanf("%d", &n);
//     printf("%d", fibo(n) );
//     return 0;
// }
#include <stdio.h>
int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int ans1 = fibo(n - 1);
    int ans2 = fibo(n - 2);
    int ans = ans1 + ans2;
    return fibo(n - 1) + fibo(n - 2);
}   
int main()
{
    int n;
    printf("enter trhe number ");
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}