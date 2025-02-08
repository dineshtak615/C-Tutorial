#include<stdio.h>
int main(){
     float a,b,p;

printf("enter thr price a b ");
scanf("%f",&a,&b);
scanf("%f",&p);

p =((a-b)/3)*100;
printf("%f",p);
switch(p)
{
case 1:
   if(P>0)
   printf("%f pro",p);
   break;
case 2:
   if(P==0)
   printf("%f equal",p);
   break; 
case 3: 
   if(P<0)
   printf("%f loss",);
   break;
default
   printf("no");       
}
return 0;
}







