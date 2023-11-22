#include<stdio.h>
int main()
{
    int n,s=0,firstdigit,lastdigit;
    scanf("%d",&n);
    lastdigit=n%10;
    firstdigit=n;
    while(n>=10)
    {
        n=n/10;
    }
    firstdigit=n;
    s=firstdigit+lastdigit;
    printf("%d",s);
}