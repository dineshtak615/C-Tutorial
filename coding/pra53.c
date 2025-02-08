#include<stdio.h>
int main(){


    signed short a=32768;
    printf("%d",~(++a)>>5);
    return 0;
    
}