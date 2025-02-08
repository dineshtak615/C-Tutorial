#include<stdio.h>

int main()
{
    int i,n;
    int rem ,tem=n;
    scanf("%d",&n);

    int sum =0,fact;
    while(n)
    {
        i=1;fact=1;
sum=sum+fact;
n=n/10;

        rem=n%10;
        while(i<=rem){
            fact=fact*i;
            i++;

        }


        
    }
    if(sum==tem)
    {
        printf("yes\n");

    }
    else
    printf("no\n");

}