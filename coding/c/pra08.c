#include<stdio.h>
int main()
{
 int m1,m2, h1,h2,H,M,T;
    printf("enter the value m1 ,m2 , h1, h2");
    scanf("%d %d %d %d",&m1,&m2, &h1,&h2);
    T =m1+m2 ;
    H=h1+h2 +T/60 ;
M=T%60;
printf(  "%d %d ",H,M);
return 0;
}