#include<stdio.h>

int main() {
    float num1, num2;
    
    // Input: Reading two floating-point numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Using ternary operator to check if num1 is greater than or equal to num2
    printf((num1 >= num2) ? "true\n" : "false\n");

    return 0;
}
