#include<stdio.h>
float average(int a,int b,int c);
int main()
{
int a,b,c;
printf("ener the value a \n: ");
scanf("%d",&a);
printf("ener the value b \n: ");
scanf("%d",&b);
printf("ener the value c\n: ");
scanf("%d",&c);
printf("the value of the average %f\n",average(a,b,c));
}
float average(int a,int b,int c)
{
float result;
result=((a+b+c)/3);

return result;

}