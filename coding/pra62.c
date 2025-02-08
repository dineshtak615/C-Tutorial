#include<stdio.h>
int main(){

    int n,c;
    printf("enter a numb");
    scanf("%d",&n);
    c = n*n*n;
    if(n<15)
    {

        printf("%d",c);
    }
    else{
        printf("not exist");
    }
    return 0;
}