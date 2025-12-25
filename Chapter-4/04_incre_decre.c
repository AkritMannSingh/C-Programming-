#include <stdio.h>
int main(){
	int i = 7;
	printf("The value of i is %d\n", i);
	
	i = i + 7;
	printf("The value of i is %d\n", i); 
	
	printf("The value of i is %d\n", i++); //14
	printf("The value of i is %d\n", i); //15
	
	i += 2; //same as a i = i + 2;
	printf("The value of i is %d", i);
	
	return 0;
}