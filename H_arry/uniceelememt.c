#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1,3,6,1,1,2,3} ;
    bool flag = false;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d", arr[i]);
            break;
        }
    }

    return 0;
}