#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n, *ptr,sum=0;
    printf("enter a numb");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL);
    {
        printf("sorry nothing");
        exit(0);

    }
printf("emnter the array");
for(i=0;i<n;i++)
{
    scanf("%d",ptr+i);
    sum +=*(ptr+i);

}
printf("sum %d",sum);
return 0;
}