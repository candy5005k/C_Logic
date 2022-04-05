#include<stdio.h>

int main()
{
	int iKm =0;
	float pLiter =0;
	 
	printf("input total distance in km :\n");
	scanf("%d",&iKm);
	
	printf("input total fuel spent in liters:\n");
	scanf("%f",&pLiter);
	
	
	printf("Average consumption (km/lt): %f",iKm/pLiter);
	printf("\n");
	
	return 0;
}
