#include <stdio.h>


int main()
{
	float temp;
	
	printf("\nEnter the temperature in celcius: ");
	scanf("%f", &temp);	
	if(temp <=0)
	{
		printf("\nICE:");
	}
	else
	if(temp > 100)
	{
		printf("\nSTEAM");
	}
	else
	{
		printf("\nWATER");
	}
		
	return 0;
}
