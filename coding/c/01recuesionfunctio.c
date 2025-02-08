#include<stdio.h>
int factorial(int x)
{
    printf("calling function is %d\n ",x );

    if(x==1 || x==0)
    {
        return 1;

    }
    else
    {
        return (x * factorial(x-1));
    }
    

    

        

}
 int main()
 {int a=5;


printf("the value of factorial %d= %d\n",a,factorial(a));

return 0;

 }

