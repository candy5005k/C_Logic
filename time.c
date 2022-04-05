#include<stdio.h>

int main()

{
	int number;
	int hrs,min,sec;
	
	printf("enter the number in sec:\n");
	scanf("%d",&number);

	hrs = (number/3600);
	
	printf("%d hours\n",hrs);
	
	min = (number -(hrs*3600))/60;
	
	printf("%d min\n",min);

	sec = (number - ((3600*hrs)+(min*60)));
	printf("%d sec\n",sec);

	return 0;
}
