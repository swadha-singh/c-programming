#include<stdio.h>
int main ()
{
	float r, a, c;
	printf("enter radius of circle");
	scanf("%f",&r);
	a=(3.14*r*r);
	c=(2*3.14*r);
	printf("radius=%.2f\narea=%.2f\ncircumference=%.2f",r,a,c); 
	return 0;
}
