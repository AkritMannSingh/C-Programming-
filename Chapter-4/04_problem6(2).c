#include <stdio.h>

int main()
{
	printf("Factorial Calculator:\n");

	int product = 1;
	int n;
	int i = 1;

	printf("Enter any Number to find Factorial: ");
	scanf("%d", &n);

	printf("\n%d! = ", n);

	while (i <= n)
	{
		product *= i;
		i++;
	}

	printf(" = %d\n", product);

	return 0;
}