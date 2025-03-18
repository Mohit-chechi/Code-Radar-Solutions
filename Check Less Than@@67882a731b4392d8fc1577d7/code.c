#include<stdio.h>

int main() {
    float num1, num2;
   
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Comparing num1 and num2: ");
    printf(num1 < num2 ? "true" : "false"); 
    
    return 0;
}
