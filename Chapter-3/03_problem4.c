#include <stdio.h>
int main()
{
	printf("Welcome! In this session C based Year Verification..\n");
	
	printf("************************************************************\n");
	char c;
	int year;
	printf("Enter the Year:");
	scanf("%d", &year);

	if (year % 4 == 0 && year && 100 != 0 || year % 400 == 0)
	{
		printf("Hey! This is Leap year..\n");
	}

	else
	{
		printf("Nope! This is not a leap year..\n");
	}

	printf("============================================================\n");

	printf("Did I help you? Please give feedback:");
	scanf("%s", &c);

	return 0;
}