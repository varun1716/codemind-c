#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i,k;
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            k=i;
        }
    }
    printf("%d",k);
}