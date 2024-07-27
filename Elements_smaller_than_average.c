#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg=sum/n;
    int cout=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        cout++;
    }
    printf("%d",cout);
}