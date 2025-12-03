#include <stdio.h>
int main(){
  int a = 22;
  int b = 22*3;
  int c = a + b;
  printf("The value of a is %d and value of b is %d and sum is %d", a, b, c);
  //Modulus operator is used to get the remainder from the divisio of two numbers
  printf("The remainder when a is divided by b is %d\n", a%b);

  // This does not work for exponentiation in C
  // int d = a^b;
  return 0;
}
