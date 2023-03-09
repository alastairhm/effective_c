#include <stdio.h>

// Define four functions that take two integers and return an integer
int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

// Define an array of four function pointers that take two integers and return an integer
int (*func_array[4])(int, int) = {sum, subtract, multiply, divide};

// Define a function that takes an index and two integers and invokes the corresponding function in the array
int invoke(int index, int x, int y) {
    // Check if the index is valid
    if (index < 0 || index > 3) {
        printf("Invalid index\n");
        return 0;
    }
    // Invoke the function using array notation
    return func_array[index](x, y);
}

// Test the program
int main(void) {
    // Declare some variables
    int i, j, op;
    
    // Ask for user input
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);
    
    printf("Enter an operation (0: sum, 1: subtract, 2: multiply, 3: divide): ");
    scanf("%d", &op);
    
    // Call the invoke function and print the result
    printf("The result is %d\n", invoke(op,i,j));
    
}