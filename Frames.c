#include<stdio.h>
int main()
{
    int N,M,X,Cost;
    scanf("%d%d%d",&N,&M,&X);
    Cost=X*2*(N+M);
    printf("%d",Cost);
}