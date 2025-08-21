#include <stdio.h>
void fun(int a){
      a=7;
}
int main() {
    // int arr[5]={1,2,3,4,5};
    // fun(arr);
    int a=4;
    printf("%d\n",a);
    fun(a);
    printf("%d\n",a); 
    return 0;
}