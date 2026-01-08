#include <stdio.h>
int main()
{

// Using Do - while loop
// This is the first part of a Question 

	int sum = 0;
	int n = 1;

	do
	{
		sum += n;
		n++;
	} while (n <= 10);

	printf("The sum is %d", sum);

	return 0;
}