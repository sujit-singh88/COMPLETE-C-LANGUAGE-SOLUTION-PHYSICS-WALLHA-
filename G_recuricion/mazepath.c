#include <stdio.h>
int maze(int cr, int cc , int er,  int ec   ){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
        if (cr== er)
    { // only rightway call
        rightways += maze(cr, cc + 1, er, ec);
    }
    if(cc==ec){// only downwords calls
         downways += maze(cr + 1, cc, er, ec);
    }
    if (cr<er && cc<ec) {
        rightways += maze(cr, cc + 1, er, ec);
         downways += maze(cr + 1, cc, er, ec);
    }
    int totalways= rightways+downways;
     return totalways;
}
int main() {
    int n;
    printf("enter the number of row ");
    scanf("%d",&n);
    int m;
    printf("enter the number of columns ");
    scanf("%d", &m);
    int numberofways  = maze(1,1,n,m);
    printf("%d",numberofways );
    return 0;
}