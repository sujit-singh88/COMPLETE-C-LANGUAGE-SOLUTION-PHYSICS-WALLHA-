#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {-3, -5, -4, -6, -9, -7, -9};
    int max = INT_MIN;
    int secondmax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    // second maxmum number is -4
    for (int i = 0; i <= 6; i++)
    {
         
    printf("%d", secondmax);
    return 0;
}    