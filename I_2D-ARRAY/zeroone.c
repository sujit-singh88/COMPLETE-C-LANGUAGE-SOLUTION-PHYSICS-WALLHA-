#include <stdio.h>
int main() {
    int arr [3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    // 1 0 1 1
    // 0 1 0 1
    // 1 0 0 1
  int maxcount =0;
  int maxindix =-1;

    for(int i=0; i<3; i++){
        int count = 0 ;
       for(int j=0; j<4; j++){
         if (arr[i][j]==1) count++;
       }
       if(maxcount<count){
        maxcount = count ;
        maxindix = i;
       }
       printf("\n");

    }
    printf("the maximum numbre of one is an one row  %d \n row name is %d",maxcount,maxindix);
    return 0;
}