#include<stdio.h>
/*Write a C program that read 5 numbers and sum of all odd values between them.*/
int main()
{
	int iCnt = 0;
	int number[5];
	int total =0;
	
	printf("Enter the number:\n");
	scanf("%d",&number[0]);

	printf("Enter the number:\n");
	scanf("%d",&number[1]);

	printf("Enter the number:\n");
	scanf("%d",&number[2]);

	printf("Enter the number:\n");
	scanf("%d",&number[3]);

	printf("Enter the number:\n");
	scanf("%d",&number[4]);

	for(iCnt = 0; iCnt<=5; iCnt++)
	{
	   if((number[iCnt]%2 )!=0)
	{
		total +=number[iCnt];
	}
	}
 	printf("\nSum of all odd values: %d", total);
	printf("\n");
	

	return 0;
}
