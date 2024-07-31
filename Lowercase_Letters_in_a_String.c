#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        count++;
    }
    printf("%d",count);
}