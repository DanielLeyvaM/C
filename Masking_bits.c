#include <stdio.h>

int main(){
    char x=0b0101;
    char y=0b1011;
    char mask=0b0001;


    if(x&mask){
        printf("Last digit equal to 1\n");
    }
    if(x&mask && y&mask){
        printf("Both numbers last digit is 1\n");
    }
    return 0;
}
