#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=1;j--)
        {
            if(i>=j)
            printf("%d ",a-j+1);
            else
            printf(" ");
            
        }
        printf("
");
    }
}