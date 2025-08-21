#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int arr[n][m];

    printf("Enter all elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Assume first element as both min and max
    int max = arr[0][0], min = arr[0][0];
    int max_i = 0, max_j = 0;
    int min_i = 0, min_j = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr
                
                [i][j] > max)
            {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                min_i = i;  
                min_j = j;
            }
        }
    }

    printf("\nMaximum element = %d at location (%d, %d)\n", max, max_i, max_j);
    printf("Minimum element = %d at location (%d, %d)\n", min, min_i, min_j);

    return 0;
}