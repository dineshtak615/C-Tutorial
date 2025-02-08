#include<stdio.h>
int main()

{
 int a=10,b=2,c=12,d;
 d=(a>b)?(a>c)?a:c:(b>c)?b:c;   
 printf("%d\n",~(d^2));
 printf("%d\n",d);
}
 