#include <stdio.h>

int main() {
    float num;

    // Taking input
    printf("Enter a floating point number: ");
    scanf("%f", &num);

    // Printing the input value
    printf("You entered: %.2f\n", num);

    return 0;
}
