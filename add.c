
#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int num1, num2, sum;

    // User input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function
    sum = add(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

