#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,n;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    n=(s1+s2+s3+s4+s5)*100/500;
    if(n>=90)
    {
        printf("Grade A");
    }
    else if(n>=80)
    {
        printf("Grade B");
    }
    else if(n>=70)
    {
        printf("Grade C");
    }
    else if(n>=60)
    {
        printf("Grade D");
    }
    else if(n>=40)
    {
        printf("Grade E");
    }
    else if(n<40)
    {
        printf("Grade F");
    }
}