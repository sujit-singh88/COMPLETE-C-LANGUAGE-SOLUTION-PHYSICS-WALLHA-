#include <stdio.h>
    void england(){
        printf("you are in englend\n");
        return;
    }
    void japan(){
    printf("you are in japan\n");
    england();
    return;
    }
    void pakistan(){
        japan();
        return;
    }
    void india (){
        printf("you are in india\n ");
        pakistan();
    }
    int main(){
    india();
    return 0;
}