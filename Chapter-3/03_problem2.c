#include <stdio.h>
int main(){
	
	printf("Welcome to Character Identifier!\n");
	
	printf("=================================================\n");
	
	char ch = 'a';
	char c;
	printf("Enter any Character:");
	scanf("%c", &ch);
	
	printf("The character is %c\n", ch);
	printf("The value of character in ASCII is %d\n", ch);
	
	// ASCII value btw. a to z is 97 to 122.
	
	if( ch >= 97 && ch <= 122){
		printf("Entered Character is LowerCase.\n");
	}
	
	else{
		printf("Entered Character is not LowerCase.\n");
	}
	
	printf("•••••••••••••••••••••••••••••••••••••••••••••••••••\n");
	
	
	printf("Did I help you? Please give feedback:");
	scanf("%s", &c);
	
	return 0;
}