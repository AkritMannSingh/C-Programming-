// calculate the area of circle and modify the same program to calculate the
// volume of cylinder given its radius and height.
#include <stdio.h>
int main() {
  int radius, height;
  printf("Enter the radius of circle:");
  scanf("%d", &radius);
  printf("The area of circle is %f\n", 3.14 * radius * radius);
  printf("Enter the height of cylinder:");
    scanf("%d", &height);
  printf("The volume of cylider is%f", 3.14 * radius * radius * height);
  return 0;
}