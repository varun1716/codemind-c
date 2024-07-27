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
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    int k=1;
    int krr[max]={0};
    for(int i=0;i<n;i++)
    {
        krr[arr[i]-1]++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==krr[arr[i]-1])
        {
            printf("%d ",arr[i]);
            k=0;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==krr[arr[i]-1])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    if(k)
    printf("-1");
}