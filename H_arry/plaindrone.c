#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 6, 2, 1};
    for (int i = 0; i <= 6; i++)
    {
        for(int j=6-i; i<=0; j++){
            if(arr[i]==arr[j]){
                printf("yes plindrome");
                break;
            }
            else{
                printf("not a plindrome");
                break;
            }
        }
    }

    return 0;
}