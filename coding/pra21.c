#include<stdio.h>
void main()
{
    char t;
    int p;
    printf("enter the grade in atest (a-e)");
    scanf("%c",&t);
    p=2*(70-t);
    printf("points=%d\n ",p);

}