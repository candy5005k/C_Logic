#include<stdio.h>
//401
int main()
{
	int year,week,days;
	
	printf("\n");		
	printf("enter the days\n");
	scanf("%d",&days);

	year = days/364;
	
	printf("%d years\n",year);
	
	week = (days - (year*365))/7;
	
	printf("%d weeks\n",week);
	
	days = (days - ((year*365)+(week*7)));
	
	printf("%d days\n",days);
	printf("\n");
	
	return 0;
}
