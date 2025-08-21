#include <stdio.h>
int main()
{
    int arr[7] = {7, 9, 15, 19, 27, 100, 6};
    int totaltriplets = 0;
    int x = 31;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            for (int k = j + 1; k <= 6; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totaltriplets++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("\n\\ the total pairs is %d ", totaltriplets);
    return 0;
    
}