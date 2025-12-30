#include <stdio.h>
int main(){
    printf("Hey! In Loop Section we will print numbers using Do while loop.\n");
    
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    char b[100];  
    int i = 1;
    int n;
    
    printf("Enter the number you want to print, from 1 up to that number: ");
    scanf("%d", &n);  
    
    do{
        printf("%d\n", i);
        i++;
    }while(i <= n);
    
    printf("Now! Give Feedback: ");
    scanf("%s", b); 
    
    return 0;
}