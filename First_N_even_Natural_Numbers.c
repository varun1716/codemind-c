#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2*n;i>=1;i-=2)
    {
        printf("%d ",i);
    }
}