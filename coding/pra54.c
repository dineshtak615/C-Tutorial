#include<stdio.h>
int main(){
    int a=11, b=12;
    b=(a++ + ++a ) + a++;

    printf("%d , %d ",a,b);
     return 0;

}