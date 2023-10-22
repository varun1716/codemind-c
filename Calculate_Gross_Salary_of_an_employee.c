#include<stdio.h>
int main()
{
    float pf,bs,hra,da,gs;
    scanf("%f",&bs);
    pf=12*bs/100;
    scanf("%f%f%f",&hra,&da);
    gs=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
    
}