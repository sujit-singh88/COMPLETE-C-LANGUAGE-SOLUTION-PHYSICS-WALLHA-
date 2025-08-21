#include <stdio.h>
#include<stdbool.h>
int main() {
int arr[7]={5,23,4,5,6,67,8};
int x=10;
int idx =-1;
bool flag= false;
for(int i=0; i<=6;i++){
    if(arr[i]==x){
        flag = true;
        idx = i;
        break;
    }
}
if(flag==false){
    printf("%d is not present in the array",x);

}
else{
    printf("%d is present in thee array and its index  is %d ",x);
}
    return 0;
}