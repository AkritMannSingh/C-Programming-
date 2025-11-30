/* Write C program to calculate are of rectangle.
  a. Using hard coded inputs.
  b. Using inputs supplied by the user.
  */
#include <stdio.h>
int main() {
  int length, breadth;
  printf("Enter the length of rectangle:\t");
  scanf("%d", &length);
  printf("Enter the breadth of rectangle:\n");
  scanf("%d", &breadth);
  printf("The Area of given rectangle is %d\n", length * breadth);

  return 0;
}