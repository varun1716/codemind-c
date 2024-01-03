#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n*n*(n+1)*(n+1)/4;
    int I=n*(n+1)*(2*n+1)/6;
    printf("%d",k-I);
}