#include <stdio.h>
int main() {
    int cp,sp,profit,loss;
    printf("enter the cost prise");
    scanf("%d",&cp);
    printf("enter the selling price");
    scanf("%d",&sp);
    if(cp<sp){
        profit=sp-cp;
        printf("the profit amount is : %d",profit);
    }
    else{
        loss= cp-sp;
        printf("the loss amout are : %d",loss);
    } 
    return 0;
}