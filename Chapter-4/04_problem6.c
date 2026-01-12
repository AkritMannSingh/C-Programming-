#include <stdio.h>

int main()
{
    printf("Factorial Calculator:\n");
    
    //3! = 1 X 2 X 3
    // This is the factorial.
    
    int product = 1;
    int n;
    
    printf("Enter any Number to find Factorial: ");
    scanf("%d", &n);
    
    printf("\n%d! = ", n);
    
    for (int i = 1; i <= n; i++)
    {
        product *= i;
        printf("%d", i);
        if (i < n) {
            printf(" × ");
        }
    }
    
    printf(" = %d\n", product);
    
    return 0;
}