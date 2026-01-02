#include <stdio.h>

int main() {
    int n;
    
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Natural numbers from %d to 1 in reverse order:\n", n);
    
    for(int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}