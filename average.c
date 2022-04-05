#include<stdio.h>
int main()
{
	float wItem1 =0;
	float nItem1 =0;
	float wItem2 = 0;
	float nItem2 = 0;
	float Avg  = 0;
	
	printf("Weight - item1\n");
	scanf("%f",&wItem1);
	 
	printf("No. of- item1\n");
	scanf("%f",&nItem1);
	
	printf("Weight - item2\n");
	scanf("%f",&wItem2);
	
	printf("Weight - item1\n");
	scanf("%f",&nItem2);
	 
	
	Avg =((wItem1* nItem1) + (wItem2 * nItem2)) / (nItem1 + nItem2);
	//result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
	

	printf("Average :%f\n",Avg);	
	return 0;
}
