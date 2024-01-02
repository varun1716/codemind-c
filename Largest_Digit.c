#include<stdio.h>
int main()
{
    int i,a=0;
    scanf("%d",&i);
    while(i!=0)
    {
        if((i%10)>a)
        {
            a=i%10;
        }
        i=i/10;
    }
    printf("%d",a);
    
    
    
    
}