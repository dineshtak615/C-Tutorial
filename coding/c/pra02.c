 #include<stdio.h>
 int main()
 {
    int d ,m,s;
    float rad;
    printf(" enter a angle in deg , min ,sec ");
    scanf("%d %d %d ",&d,&m,&s);
    rad = (d+ (m/60.0 ) + (s/3600.0))*(3.14/180);
    printf("%f \n ", rad);
    return 0;
 }