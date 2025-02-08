#include<stdio.h>
int main()
{
    int x ,y, z,rec;
   printf("enter tht three intgr=er :");
   scanf("%d %d %d ", &x , &y ,&z);
   rec=((y-x)==1)*((z-y)==1);
   printf("%d",rec);
   return 0;

   
}
