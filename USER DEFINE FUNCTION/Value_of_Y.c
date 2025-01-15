#include <stdio.h>
#include <math.h> 
double calculateY(int n, double a, double x, double b);
double case1(double a, double b);
double case2(double a, double x, double b);
double case3(double a, double b);
double case4(double a, double x, double b);
int main() {
    int n;
    double a, x, b, y;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of n (1 to 4): ");
    scanf("%d", &n);
    y = calculateY(n, a, x, b);
    if (y != -1) {
        printf("The value of y for n = %d is: %.2lf\n", n, y);
    } else {
        printf("Invalid value of n. Please enter n as 1, 2, 3, or 4.\n");
    }
    return 0;
}
double calculateY(int n, double a, double x, double b) {
    switch (n) {
        case 1: return case1(a, b);
        case 2: return case2(a, x, b);
        case 3: return case3(a, b);
        case 4: return case4(a, x, b);
        default: return -1; 
    }
}
double case1(double a, double b) {
    if ((int)b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
        return -1;
    }
    return (int)a % (int)b; 
}
double case2(double a, double x, double b) {
    return a * pow(x, 2) + pow(b, 2);
}
double case3(double a, double b) {
    return a - b;
}
double case4(double a, double x, double b) {
    return a + x * b;
}
