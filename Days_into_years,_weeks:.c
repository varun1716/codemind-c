#include<stdio.h>
int main()
{
    int d,years,weeks;
    scanf("%d",&d);
    years=d/365;
    weeks=(d%365)/7;
    printf("%d
",years);
    printf("%d",weeks);
}