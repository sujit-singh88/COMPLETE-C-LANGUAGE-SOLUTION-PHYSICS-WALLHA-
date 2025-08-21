#include <stdio.h>
int maze2(int n, int m)
{
    int rightways = 0;
    int downways = 0;
    if (n == 0 && m == 0)
        return 1;
    if (n == 1)
    {
        rightways += maze2(n, m - 1);
    }
    if (m == 0)
    {
        downways += maze2(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightways += maze2(n, m - 1);
        downways += maze2(n - 1, m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n;
    printf("enter the number of row ");
    scanf("%d", &n);
    int m;
    printf("enter the number of columns ");
    scanf("%d", &m);
    int numberofways = maze2(n, m);
    printf("%d", numberofways);
    return 0;
}