#include <stdio.h>
int main() {
    int arr[7]={7,6,9,13,11,17,19};
     int sumevn=0;
     int sumodd=0;
      for (int i=0; i<=6; i++){
        if(i%2==0){
            sumevn+=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
      }
      int diffrnce=sumevn-sumodd;
     printf("the diffrence is %d",diffrnce);
     // printf("sum of even : %d\nsum of odd: %d",sumevn,sumodd);
    return 0;
} 