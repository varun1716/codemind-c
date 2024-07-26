#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int flag=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x||arr[i]>y){
        printf("%d ",arr[i]);
        flag=false;
        }
    }
    if(flag)
    printf("-1");
}
