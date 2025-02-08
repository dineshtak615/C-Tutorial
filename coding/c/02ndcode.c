#include<stdio.h>
void main()

{
int i,n;
scanf("%d",&n);
for(i=1;i<n;i++)
{
    printf("the value %d\n",i);
if(i==99)
{
do{
   printf("it is %n",i); 
}while(i<n);
}
}

}