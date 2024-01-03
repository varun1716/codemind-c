#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,k=1;
    if(a!=2)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                k=0;
                break;
            }
        }
    }
    if(k)
    printf("Prime");
    else
    printf("Not Prime");
    
    
    
}