#include <stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	
	if(age>60){
		printf("You can Drive and you are senior citizens..");
	}
	
	else if(age>18){
		printf("You can Drive.");
	}
	
	else if(age==10){
		printf("Your age is just 10 year.");
	}
	
	else{
		printf("You cannot Drive!");
	}
	return 0;
}