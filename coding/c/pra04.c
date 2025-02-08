#include<stdio.h>
#include<math.h>
void main(){
    float a ,b,c;
    printf(" a b c");
    scanf( "%f %f %f",&a,&b,&c);
    float dia;
    dia= sqrt(b*b-4*a*c);
    printf("%f\n",dia);
} 