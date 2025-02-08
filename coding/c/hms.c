#include"stdio.h"
void main()
{
    int h, m,t;
    char t,n;
    printf("enter a time [h:m:s]:");
    scanf("%d %d %d %c %c",&h,&m,&s ,&t,&n );
    printf("\n \n time %d %d %d ",h,m,t);
    if(t=='A')
    {
    if(n==12)
    {
        printf("00 %.2d,%.2d,%.2d",h,m,s);
       // printf("00 %.2d,%.2d,",m,s);

    }
    else{
        printf( "%.2d,%.2d,%.2d ",h,m,s);

    }
    else if(n=='p')
    {
        if(n==12)
        printf("%.2d %.2d %.2d",h,m,s);

    }
    else{

        printf("%.2d,%.2d,%.2d",h+2,m,s);
    }
    }

}