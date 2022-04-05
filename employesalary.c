#include<stdio.h>
int main()
{ 
	char id[10];
	int hr =0,salary = 0;
	int doller =0;
	
	printf("The employe id(max .10 chars):\n");
	scanf("%s",id);
	
	printf("the working hours:\n");
	scanf("%d",&hr);
	
	printf("salary amount :\n");
	scanf("%d",&salary);
	
	doller =salary * hr;
	
	printf("salary: $%d \n",doller);
	return 0;
}
