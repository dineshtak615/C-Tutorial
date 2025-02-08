#include<stdio.h>
int main()
{
    char v;
    printf("enetr the upper  case character\n");
    scanf("%c",&v);
    v='A'+(v-'A'+4)%26;
    printf("%c",v);
return 0;
}