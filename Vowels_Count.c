#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int i,count=0;
    for(i=0;str[i];i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        count++;
        
    }
    printf("%d",count);
}