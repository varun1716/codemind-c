#include<stdio.h>
int main()
{
    char str[50];
    scanf("%s",str);
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]-'A'+'a';
    }
    printf("%s",str);
}