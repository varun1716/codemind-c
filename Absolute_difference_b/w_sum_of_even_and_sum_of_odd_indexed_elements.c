#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int oc=0,ec=0;
    for(int i=0;i<a;i++)
    {
        if(i%2==0)
        ec+=arr[i];
        else
        oc+=arr[i];
    }
    printf("%d",abs(ec-oc));
}