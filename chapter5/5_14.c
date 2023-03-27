#include <stdio.h>
#include <limits.h>


int absolute_value(int a) {
  if (a == INT_MIN) {
    printf("can't take abs of INT_MIN\n");
    return a;    
  }
  if (a < 0) {
    return -a;
  }
  return a;
}

void main(void) {
    printf("Absolute value of %d is %d\n",-14,absolute_value(-14));
    printf("Absolute value of %d is %d\n",-14,absolute_value(145));
    printf("Absolute value of %d is %d\n",INT_MIN,absolute_value(INT_MIN));
    printf("Absolute value of %d is %d\n",INT_MIN+1,absolute_value(INT_MIN+1));
    printf("Absolute value of %d is %d\n",INT_MAX,absolute_value(INT_MAX));
}