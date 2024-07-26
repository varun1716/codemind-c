#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        flag=false;
            
        }
        if(flag)
        printf("True");
        else
        printf("False");
    }