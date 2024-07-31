#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int len=strlen(str);
    bool flag=true;
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        flag=false;
    }
    if(flag)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}
