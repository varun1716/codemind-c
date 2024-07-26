#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x||arr[i]>y)
        sum+=arr[i];
    }
    printf("%d",sum);
}