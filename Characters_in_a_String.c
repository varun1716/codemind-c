#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    scanf("%[^
]s",str);
    printf("%d",strlen(str));
}