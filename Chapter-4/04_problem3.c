#include <stdio.h>
int main()
{
	int sum = 0;
	int n = 1;

	while (n <= 10)
	{
		sum += n;
		n++;
	}

	printf("The sum is %d", sum);

	return 0;
