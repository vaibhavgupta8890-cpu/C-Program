#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area = %.2f\nCircumference = %.2f\n", area, circumference);
    return 0;
}
