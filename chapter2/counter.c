#include <stdio.h>

static unsigned int counter = 0;

// Declare the retrieve function
unsigned int retrieve(void);

void increment(void) {
  extern unsigned int counter;
  counter++;
  printf("%d ", counter);
}

// Define the retrieve function
unsigned int retrieve(void) {
  // Access the static variable counter
  extern unsigned int counter;
  // Return its value
  return counter;
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
  }
  
  // Call the retrieve function and print its result
  printf("\nThe current value of counter is %u\n", retrieve());
  
  return 0;
}
