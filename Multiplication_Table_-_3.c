#include<stdio.h>
int main()
{
    int t,n,p,s;
    scanf("%d%d%d",&t,&n,&s);
    for(p=n;p<=s;p++)
    {
        printf("%d x %d = %d
",t,p,t*p);
    }
}