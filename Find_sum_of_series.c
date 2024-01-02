#include<stdio.h>
int main()
{
    float a,i,sum=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+(1/i);
    }
    printf("%.2f",sum);
}