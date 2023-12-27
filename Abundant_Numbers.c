#include<stdio.h>
int main()
{
    int n,sum=0,org;
    scanf("%d",&n);
    org=n/2;
    for(int i=1;i<=org;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n<sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}