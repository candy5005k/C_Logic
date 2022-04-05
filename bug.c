#include<stdio.h>
/*
Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80. */
int main()
{ 
	int iNum= 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iNum);
	
	if((0<iNum) && (iNum<20))
	{
		printf("the range is between [0 -20]: \n");
	
	}
	else if((20<iNum) && (iNum<40))
	{
		printf("the range is between [20 - 40]: \n");
	
	}
	else if((40<iNum) && (iNum<80))
	{
		printf("the range is between [40 -80]: \n");
	
	}
	else
	{
	
	printf("error \n");
	
	}
	

	return 0;
}
