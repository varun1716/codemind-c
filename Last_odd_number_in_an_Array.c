#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(arr[a-i-1]%2==1)
        {
            printf("%d",arr[a-i-1]);
            break;
        }
    }
}