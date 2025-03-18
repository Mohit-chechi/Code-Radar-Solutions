#include<stdio.h>

int main() {
    float num1, num2;
    
    scanf("%f %f", &num1, &num2);

    printf(num1 > num2 ? "True\n" : 
          (num1 == num2 ? "True\n" : "False"));

    return 0;
}
