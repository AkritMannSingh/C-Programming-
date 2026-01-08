#include <stdio.h>
int main()
{

// This is the first part of a Question.
// Using Do - while loop :-

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