#include <stdio.h>

int main()
{
	int sum = 0;

	printf("Calculating sum of multiples of 8:\n");

	for (int i = 1; i <= 10; i++)
	{
		int multiple = 8 * i;
		printf("8 × %d = %d\n", i, multiple);
		sum += multiple;
	}

	printf("\nTotal sum = %d\n", sum);

	return 0;
}