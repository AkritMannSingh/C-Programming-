#include <stdio.h>
int main(){
	printf("Welcome! to Grade Declaration.\n");
	printf("____________________________________");
	int marks;
	printf("Enter your marks:");
	scanf("%d", &marks);
	
	if(marks>=90){
		printf("You gain A Grade.\n");
	}
	
	else if(marks>=80){
		printf("You gain B Grade.\n");
	}
	
	else if(marks>=70){
		printf("You gain C Grade.\n");
	}
	
	else if(marks>=60){
		printf("You gain D Grade.\n");
	}
	
	else if(marks>=50){
		printf(" You gain E Grade.\n");
	}
	
	else{
	printf("You gain F Grade.\n");
	}
	
	printf("============================================================\n");
	printf("Thank You for Using it.\n");
	printf("The End.");
	
	return 0;
}