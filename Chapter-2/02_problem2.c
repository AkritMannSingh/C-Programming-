#include <stdio.h>
int main(){
	printf("Welcome to Section of Divisibility Check!\n");
	int num1, num2;
	printf("Enter the number:");
	scanf("%d", &num1);
	printf("Enter the second number by which you check divisibility:");
	scanf("%d", &num2);
	printf("Remainder = %d\n", num1%num2);
	printf("If Remainder is 0 which means First number is divisible by Second number. If Remainder != 0, means numbers are not Divisible \n");
	printf("Thank You! for using this Program...");
	
	return 0;
}