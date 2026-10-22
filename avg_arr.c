#include <stdio.h>
int main()
{
	int a[100], n, sum = 0;
	printf("Enter number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) 
    {
        printf("Invalid size.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);

    return 0;
}
