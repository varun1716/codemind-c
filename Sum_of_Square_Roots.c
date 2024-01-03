#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i;
    float sum=0;
    for(i=a;i<=b;i++)
    {
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}