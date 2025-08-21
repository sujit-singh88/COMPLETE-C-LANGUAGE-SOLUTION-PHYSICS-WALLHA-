#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of coluomns : ");
    scanf("%d", &m);
    printf("enter the all the elements\n");
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d is the sum of total element of the arrays", sum);
    return 0;
}