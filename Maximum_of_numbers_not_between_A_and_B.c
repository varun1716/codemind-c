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
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
        
    }
    int flag=true;
    for(int i=0;i<n;i++)
    {
        if(max>x && max<y)
        flag=false;
    }
    if(flag)
    printf("%d",max);
    else
    printf("-1");
}