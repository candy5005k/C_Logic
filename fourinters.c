#include<stdio.h>
 int main()
{
	int p=0,q=0,r=0,s=0;

	printf("enter the p number\n");
	scanf("%d",&p);
	
	printf("enter the q number\n");
	scanf("%d",&q);
	
	printf("enter the r number\n");
	scanf("%d",&r);

	printf("enter the s number\n");
	scanf("%d",&s);

	if( (p% 2== 0) && (q > 0) && (r > 0) && (s > 0) && (q > r) && (s > q) && (r + s)>(p + q) )
	{
	  printf("correct values\n");
	}
	else
	{
	  printf("wrong values\n");
	}

	return 0;
}
