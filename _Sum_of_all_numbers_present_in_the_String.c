#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int sum=0;
    for(int i=0;str[i];i++)
    {
        if('0'<=str[i]&&str[i]<='9')
        sum+=(str[i]-'0');
    }
    printf("%d",sum);
}