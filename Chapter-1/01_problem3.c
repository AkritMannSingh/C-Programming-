#include <stdio.h>
int main(){
  int celsius;
  printf("Enter the temperature in Celsius:");
  scanf("%d", & celsius);
  printf("The temperature in Fahrenheit is %f°F\n", (celsius*9.0/5.0)+32);
  return 0;
}