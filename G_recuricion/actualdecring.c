#include <stdio.h>
void decring(int n)
{

    if (n == 0)
        return;
    printf("%d\n", n);
    decring(n - 1);
    return;
}
int main()
{
    int n;
    printf("enter trhe number ");
    scanf("%d", &n);
    decring(n);
    return 0;
}