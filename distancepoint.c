#include<stdio.h>
#include<math.h>
////sqrt''(x2-x1)^2+(y2 - y1)^2;

int main()
{
	float x1 = 0,x2 = 0,y1 = 0,y2 = 0 ;
	float distance = 0;

	
	printf("Enter the x1 number:\n");
	scanf("%f",&x1);
	
	printf("Enter the x2 number:\n");
	scanf("%f",&x2);
	
	printf("Enter the y1 number:\n");
	scanf("%f",&y1);
	
	printf("Enter the y2 number:\n");
	scanf("%f",&y2);
	
	distance =((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

	printf("the distance between given points:%f\n",sqrt(distance));
	
	return 0;
}
