#include<stdio.h>
int prop_fact(int x)
{
    int fact=0,i;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        fact+=i;
    }
    return fact;
}
int main()
{
    int a;
    scanf("%d",&a);
    int b=prop_fact(a);
    if(a==b)
    printf("PERFECT");
    else if(b<a)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}