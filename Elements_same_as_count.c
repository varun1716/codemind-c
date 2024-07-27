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
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int krr[max]={0};
    for(int i=0;i<n;i++)
    {
        krr[arr[i]-1]++;
    }
    int k=1;
    for(int i=0;i<n;i++)
    {
        if(krr[arr[i]-1]==arr[i])
        {
            printf("%d ",arr[i]);
            krr[arr[i]-1]=0;
            k=0;
        }
    }
    if(k)
    printf("-1");
}