#include<stdio.h>
int main()
{
	float temp_c,temp_f;
	printf("temperature in celsius:");
	scanf("%f",&temp_c);
	temp_f=(temp_c*(9.0/5.0)+32);
	printf("temperature in fahrenheit:%.2f",temp_f);
	return 0;
}