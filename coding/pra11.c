#include<stdio.h>
#include<math.h>

int main()
{
float  p,r, t, interest;
printf("enter the principal amount rate & time ");

scanf("%f %f %f ",&p,&r,&t);

interest=(t<1)?(p*t*r/100):(p*(pow((1+r/100),t))-p);
printf("%f\n ",interest);
return 0;

}
