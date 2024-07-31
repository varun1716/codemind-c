#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        count++;
    }
    printf("%d",count);
}