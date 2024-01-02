#include<stdio.h>
int ami(int i)
{
    int sof=0,j;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            sof+=j;
        }
    }
    return sof;
}
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=ami(a);
    d=ami(b);
    printf("%s",(c==d)?"Amicable":"Not Amicable");
    
}