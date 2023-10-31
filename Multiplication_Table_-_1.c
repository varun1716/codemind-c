#include<stdio.h>
int main()
{
    int t,n,p;
    scanf("%d",&t);
    for(n=1;n<=12;n++)
    {
        p=t*n;
        printf("%d x %d = %d
",t,n,p);
    }
}