#include<stdio.h>
int main()
{
    bool  int a=true;
    printf("%d\n",&a);
    printf("%d\n ",sizeof(a));
    scanf("%d",&a);
    printf("%d\n ",a);
    if(a)
    printf("true\n");
    else
    printf("false \n");

    return 0;
}