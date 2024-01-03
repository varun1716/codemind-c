#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=a;j++)
        {
            if(j>i)
            printf("*");
            else
            printf("%d",i);
        }
        printf("
");
    }
}