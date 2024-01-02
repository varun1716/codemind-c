#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(i%2==0)
            {
                printf("1 ");
            }
            else
            printf("0 ");
        }
        printf("
");
    }
}