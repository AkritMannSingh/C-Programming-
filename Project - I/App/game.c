#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("=========================================\n");
    printf("        🎮 NUMBER GUESSING GAME 🎮\n");
    printf("=========================================\n\n");
    
    printf("🗣️ I'm thinking of a number between 0 and 100.\n");
    printf("Can you guess what it is?\n\n");

    srand(time(NULL));
    int random_num = rand() % 101;  
    int times_guesses = 0;
    int guessed_num;

    //printf("(the number is %d)\n\n", random_num);

    do
    {
        printf("Enter your guess (0-100): ");
        
        if (scanf("%d", &guessed_num) != 1) {
            printf("Invalid input! Please enter a number.\n");
            
            while(getchar() != '\n');
            continue;
        }
       
        times_guesses++;
        
        
        if (guessed_num < 0 || guessed_num > 100) {
            printf("Number should be under 100!\n\n");
            continue;
        }
        
        
        if (guessed_num > random_num) {
            printf("📈 Try a lower number.\n\n");
        }
        else if (guessed_num < random_num) {
            printf("📉 Try a higher number.\n\n");
        }
        else {
            printf("\n");
            printf("════════════════════════════════════\n");
            printf("      🎉 CONGRATULATIONS! 🎉\n");
            printf("════════════════════════════════════\n");
            printf("You guessed the number.\n");
        }

    } while (guessed_num != random_num);

    
    printf("\n");
    printf("========================================\n");
    printf("             GAME STATS\n");
    printf("========================================\n");
    printf("Number of guesses: %d\n", times_guesses);
    
    if (times_guesses <= 5) {
        printf("Performance: 🏆 Excellent!\n");
    }
    else if (times_guesses <= 10) {
        printf("Performance: 👍 Good!\n");
    }
    else if (times_guesses <= 15) {
        printf("Performance: 😊 Fair\n");
    }
    else {
        printf("Performance: 🧐 Keep practicing!\n");
    }
    printf("========================================\n\n");

    return 0;
}