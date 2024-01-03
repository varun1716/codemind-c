#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int k=a;
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=1;j--)
        {
            if(i>=j)
            printf("%d ",k);
            else
            printf(" ");
        }
        k--;
        printf("
");
    }
}