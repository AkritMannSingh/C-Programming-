#include <stdio.h>
int main(){
    printf("Hello! Welcome to Declaration of Pass or Fail.\n");
    
    printf("*****************************************************************************\n");
    
    int marks1, marks2, marks3;
    
    printf("Enter Marks in Subject 1:");
    scanf("%d", &marks1);
    
    printf("Enter Marks in Subject 2:");
    scanf("%d", &marks2);
    
    printf("Enter Marks in Subject 3:");
    scanf("%d", &marks3);
    
    printf("The given Marks are %d  %d and %d\n", marks1, marks2, marks3);
     
    if(marks1 < 33 || marks2 < 33 || marks3 <33){
        printf("Sorry! You are failed due to less marks in individual subjects.\n"); 
   }
   
   else if((marks1+marks2+marks3)/3<40){
    printf("Sorry! You are failed due to less Percentage.\n");
    }
    
   else{
    printf("Congratulations! You have passed the Exam.\n");
    }
    
    printf("----------------------------------------------------------------------------------------------------\n");
    
    printf("Thank You! I hope I have helped you...\n");
    return 0;
}