#include<stdio.h>
#define pi 3.14

void main(void)
{
float r;
int d,m,s;
printf("enter a radins ");
scanf("%f",&r);
r=(r*180)/pi;
d=r;
r =(r-d)*60;
m=r;
s=(r-m)*60;
printf("%d %d %d \n ", d,m,s); 
return 0;


}