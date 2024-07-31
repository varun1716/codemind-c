#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    char str2[30];
    strcpy(str2,str);
    printf("%s",str2);
}