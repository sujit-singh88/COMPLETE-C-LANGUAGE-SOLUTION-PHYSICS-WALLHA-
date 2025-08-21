// #include <stdio.h>
// int main() {
//     int arr[7] = {-3,-5,-4,-6,-9,-7,-9};
//     int max=-1;
//     for(int i=0; i<=6;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }
#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {-3, -5, -4, -6, -9, -7, -9};
    int max = INT_MIN;
    for (int i = 1 ; i <= 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}
 