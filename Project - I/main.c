#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int random_num = (rand() % 100) + 1;
	int times_guesses = 0;
	int guessed_num;
	//printf("Random Number : %d\n", random_num);

	do
	{
		printf("Guess any number (1-100): ");
		scanf("%d", &guessed_num);

		if (guessed_num > random_num)
		{
			printf("Please! Enter lower number.\n");
		}
		else if (guessed_num < random_num)
		{
			printf("Please! Enter higher number.\n");
		}
		else
		{
			printf("Congratulations!!\n");
		}

		times_guesses++;

	} while (guessed_num != random_num);

	printf("You guessed the number in %d guesses.\n", times_guesses);

	return 0;
}
