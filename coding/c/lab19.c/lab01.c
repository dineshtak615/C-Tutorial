#include<stdio.h>
#include<string.h>
 union pu_university {
    char wibsite[52];
    char subject[35];
    int price;

 };

  int main()
  {
union pu_university pu;

strcpy(pu.wibsite,"bytexl.com");
puts(pu.wibsite);
//printf("%s\n",pu.wibsite);
strcpy(pu.subject,"programmig");
//\\printf("%s\n",pu.subject);
puts(pu.subject);
pu.price=10000;
printf("%d\n",pu.price);

return 0;
  }