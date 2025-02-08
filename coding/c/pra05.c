#include<stdio.h>
#include<math.h>
 int main()
{
float p,t ,r,si,ci,diff;
printf("enter the amount / time / rate");
scanf("%f %f %f ",&p,&t,&r);
si=(p*t*r)/3;//simple interst calculate
ci=p*pow(1+r/100,t)-p;//compound interst 
diff=ci-si;//differnce calciulate
printf(" simple is %f , ci is %f , diff is %f",si , diff);

return 0;

}
