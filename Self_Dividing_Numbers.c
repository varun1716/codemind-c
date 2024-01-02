#include<stdio.h>
int co(int x)
{
    int co=0;
    while(x!=0)
    {
        co+=1;
        x=x/10;
    }
    return co;
}
int sdn(int x)
{
    int k=x,sdn=0,I;
    while(k!=0)
    {
        I=k%10;
        if(I==0)
        break;
        if(x%I==0)
        {
            sdn+=1;
            
        }
        k=k/10;
    }
    return sdn;
}
int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(sdn(i)==co(i))
        printf("%d ",i);
        
    }
}