#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum;
    for(int i=0;i<a;i++)
    {
        sum=0;
        for(int j=0;j<b;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }
}