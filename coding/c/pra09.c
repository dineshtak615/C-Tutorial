#include<stdio.h>
int main()
{
    int a,b,c,d,e,np,dec;
    printf(" enter   the student marks in five test  :");
    scanf("%d %d %d %d %d ",&a, &b,&c,&d,&e);
    np=((a>=35 ) +(b>=35)  +(c>=35) +(d>=35)  +(e>=35));
dec=(np==5);
printf("%d ",dec);



}
