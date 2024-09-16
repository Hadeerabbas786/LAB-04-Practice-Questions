#include<stdio.h>

int main()
{
	float income,tax,tax_amount,net_income_after_tax;
	printf("Enter Your Income: ");
	scanf("%g",&income);
	printf("The Total Income is:%g\n",income);
	
	if (income<=250000){
		printf("No Tax");		
	}
	else if (income>=250001 && income<=500000){
		tax_amount = income * 0.05;
		printf("The Tax Amount is:%g\n",tax_amount);
	}
	else if (income>=500001 && income<=1000000){
		tax_amount = income * 0.2;
		printf("The Tax Amount is: %g\n",tax_amount);
	}
	else if(income>1000000){
	    tax_amount = income * 0.3;
		printf("The Tax Amount is: %g\n",tax_amount);
	}
net_income_after_tax = income - tax_amount;
printf("The Net Income After Tax is: %g\n",net_income_after_tax);
 
 return 0;
 
}
