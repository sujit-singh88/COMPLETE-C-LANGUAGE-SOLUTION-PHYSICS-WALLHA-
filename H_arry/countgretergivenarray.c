#include <stdio.h>
int main() {
    int arr[8]={2,4,5,6,8,9,1,11,};
    int a=7;
    int count =0;
    for(int i=0;i<=7;i++){
       if(arr[i]>a) {
        count++;
       }
       
    } 
    printf("%d\n", count);

    return 0;
}