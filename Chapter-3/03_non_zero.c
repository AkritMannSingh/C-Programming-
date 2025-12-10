#include <stdio.h>
int main(){
	if(1){
		printf("This if executed.\n");
	}
	if(1313){
		printf("This also executed.\n");
	}
	
	if(34.242){
		printf("This floating point also executed.\n");
	}
	
	if('A'){
		printf("This character also executed.\n");
	}
	
	if(0){
		printf("Hello! I am Zero so I am not exucuted.\n");
		//Zero Excute Nhi Hoga.
	}
	return 0;
}