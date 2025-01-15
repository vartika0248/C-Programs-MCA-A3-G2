#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
    a = abs(a);
    b = abs(b);
    int quotient = 0;
    while (a >= b) {
        a -= b;
        quotient++;
    }
    return sign * quotient;
}
int main() {
    int a, b;
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);
    int result = divide(a, b);
    printf("Quotient: %d\n", result);
    return 0;
}
