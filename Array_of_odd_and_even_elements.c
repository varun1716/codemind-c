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
    int arr2[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        arr2[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        arr2[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
}