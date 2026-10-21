#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	printf("enter number:");
	scanf("%d",&i);
	for (j=1;j<11;j++)
	{
		printf("%d × %d = %d\n",i,j,i*j);
	}
getch();
return 0;
}