#include <stdio.h>

// Function Prototype
int sum(int, int);

// Function Definition
int sum(int x, int y){
    printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 15;
    int b = 10;

    // int c = a + b;
    // printf("The sum of given number is %d\n", c);
    sum(a,b);

    int a2 = 16;
    int b2 = 14;

    // int c2 = a2 + b2;
    // printf("The sum of given number is %d\n", c2);
    sum(a2,b2);

    return 0;
}