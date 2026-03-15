#include <stdio.h>

// Function Prototype
int sum(int, int);

// Function Definition
int sum(int x, int y)
{
    // printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{
    // -:FUNCTION CALL:-

    int a = 15;
    int b = 10;

    int c = sum(a, b); //Function call
    printf("The sum is %d", c);

    int a2 = 16;
    int b2 = 14;

    sum(a2, b2); //Function call

    return 0;
}