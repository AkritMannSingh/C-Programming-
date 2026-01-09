#include <stdio.h>
int main()
{
	int sum;
	scanf("%d", &sum);

	for (int i = 0; i <= 10; i++)
	{
		sum += i;
	}

	printf("The sum is %d", sum);

	return 0;
}