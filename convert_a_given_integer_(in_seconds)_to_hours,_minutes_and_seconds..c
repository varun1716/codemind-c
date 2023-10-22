#include<stdio.h>
#include<math.h>

int main()
{
	 int t, H,M,S;
	 scanf("%d", &t);
	 H= t/3600;
	 M = (t - H*3600)/60;
	 S = t - H*3600 - M*60;
	 printf("H:M:S-%d:%d:%d",H,M,S);
	 return(0);
}