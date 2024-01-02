#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=0,j=1;
    while(a)
    {
        if(j==a)
        {
            printf("True");
            break;
        }
        else if(j>a)
        {
            printf("False");
            break;
        }
        int k=i;
        i=j;
        j=k+i;
    }
}