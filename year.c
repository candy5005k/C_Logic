#include<stdio.h>
int main()
{
	int days = 1329;
	int week = 0;
	int year = 0;
	
	year = days/365;
	week = (days % 365)/7;
	days = days-((year*365)+(week*7));
	printf("year :%d\n",year);
	printf("week :%d\n",week);
	printf("days :%d\n",days);
	
	return 0;
}
