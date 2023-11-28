#include<stdio.h>
int main()
{
    int bs;
    float da,hra,gs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        da=0.80*bs;
        hra=0.20*bs;
        gs=bs+da+hra;
        {
            printf("%.2f",gs);
        }
    }
    else if(bs<=20000)
    {
        da=0.90*bs;
        hra=0.25*bs;
        gs=bs+da+hra;
        {
            printf("%.2f",gs);
        }
    }
    else if(bs>20000)
    {
        da=0.95*bs;
        hra=0.30*bs;
        gs=bs+da+hra;
        {
            printf("%.2f",gs);
        }
    }
    
    
}