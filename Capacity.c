#include<stdio.h>
int main()
{
    int T,S,B,cap;
    scanf("%d%d%d",&T,&S,&B);
    cap=T*S*B;
    printf("%d KB",cap);
}