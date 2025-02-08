#include<stdio.h>
int main(){
    int d;
    int a,b,c;
     
     printf("enter the value of a ,b, c");
     scanf("%d %d %d",&a,&b,&c);

     d=a+b+c;
     if(d==180 && a>0 && b>0 && c>0)
     {
            printf("%d is triangle ",d);
            return 0;
      }
     else(d!=180);
     {
        printf("it is not valid");
     }
return 0;
}