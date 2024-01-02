#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,b=0,count=0,n=a,m=a;
    while(a!=0)
    {
        if(a!=0)
        count=count+1;
        a=a/10;
    }
    while(n!=0)
    {
        b=b+pow(n%10,count);
        count--;
        n=n/10;
    }
    if(b==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}