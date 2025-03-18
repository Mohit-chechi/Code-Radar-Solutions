#include<stdio.h>

int main() {
    float num1, num2;
    
    
    scanf("%f %f", &num1, &num2);

    // Using ternary operator to check if num1 is greater than or equal to num2
    printf((num1 >= num2) ? "True\n" : "False\n");

    return 0;
}
