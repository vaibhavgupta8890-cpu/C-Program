#include <stdio.h>
int main() {
    float m1, m2, m3, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f%f%f", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3;
    printf("Average marks = %.2f\n", avg);
    return 0;
}
