#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if (b != 0)
        printf("Quotient: %d\n", a / b);
    else
        printf("Cannot divide by zero\n");
    printf("Modulus: %d\n", a % b);
    return 0;
} 
