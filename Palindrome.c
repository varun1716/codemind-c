#include<stdio.h>
int main()
{
    int r,n,rev=0,i;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(i==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}