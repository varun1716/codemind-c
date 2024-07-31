#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int max=str[0];
    for(int i=0;str[i];i++)
    {
        if(max<str[i])
        max=str[i];
    }
    printf("%c ",max);
}