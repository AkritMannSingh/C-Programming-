#include <stdio.h>
int main(){
  int p;
  int r;
  int t;
  printf("Enter the principal amount:");
  scanf("%d", & p);
  printf("Enter the rate of interest:");
  scanf("%d", & r);
  printf("Enter the time period:");
  scanf("%d", & t);
  printf("The simple interest is %f\n", (p*r*t)/100.0);
  return 0;
}