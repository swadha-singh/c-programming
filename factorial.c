#include<stdio.h>
int main()
{
	int n,i;
	long long fact=1;
	printf("Enter number :");
	scanf("%d",&n);
	
	if (n<0)
	   printf("factorial not defined");
	else
	{
		for (i=1; i<=n; i++)
		       fact=fact*i;
		       printf("factorial = %lld",fact);
	}
return 0;
}
  
	