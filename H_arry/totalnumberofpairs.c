#include <stdio.h>
int main() { 
    int arr[7]={7,9,15,19,27,100,6};
    int totalpairs=0;
    int x = 16;  
    for(int i=0; i<=6; i++){
        for (int j=i+1; j<=6; j++ ){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("\n the total pairs is %d ",totalpairs);
    return 0;
} 