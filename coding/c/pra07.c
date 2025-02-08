#include<stdio.h>
 int main()
 {
    int sum =0,num;

printf("enter a number :");
scanf("%i",&num);
sum =sum +num%10;
num=num/10;
//sum=sum+num%10;
//num=num/10;
sum =sum+num;
printf("showing the sum is %i",sum);
return 0;

 }
