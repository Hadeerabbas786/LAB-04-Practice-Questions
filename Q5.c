#include<stdio.h>

int main()
{
	int year;
	printf("Enter the Year:");
	scanf("%d",&year);
	
	if (year %400 == 0){
		printf("The year you enter is a leap year");
	}
	else {
		printf("The year you enter is not a leap year");
	}
	return 0;
}
