#include <stdio.h>
int main() {
    int x,y;
    printf("enter the coordinates");
    scanf("%d%d",&x,&y); 
    if(x==0 && y==0){
        printf("point lie on orizn");
    }
    else if (x==0){
        printf("ppoin lie on x-axis");
    }
    else if(y==0){
        printf("point lie on y-axis");
    }
    else{
        printf("point does not lie x or y axis and orizn ");
    }
    return 0;
}