#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c,d;
    scanf("%d %d",&c,&d);
    int arr2[c][d];
    for(int i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]+arr2[i][j]);
        }
        printf("
");
    }
    
}