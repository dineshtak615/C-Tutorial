#include<stdio.h>
#include <math.h>
int main()
{
    int m;
    char v;
    printf("enter the student marks (0-100)\n");
    scanf("%d ",&m);
    v='A'+(4-(m/20))+(m==100);
    printf("grade = %c \n ", v);
    return 0;
}1