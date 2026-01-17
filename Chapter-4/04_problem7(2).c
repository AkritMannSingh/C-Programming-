#include <stdio.h>

int main()
{

// This is again done by using While Loop.

	printf("This program finds, given number is prime or not…\n");

	int n;
	int not_prime = 0;

	printf("Enter any number:");
	scanf("%d", &n);

	if (n == 1 || n == 0)
	{
		not_prime = 1;
	}
	else
	{
		int i = 2;
		while (i < n)
		{
			if(n % i == 0 && n != 2)
			{
				not_prime = 1;
				break;
			}
			i++;
		}
	}
	if (not_prime)
	{
		printf("%d is not prime\n", n);
	}

	else
	{
		printf("%d is prime", n);
	}

	return 0;
}