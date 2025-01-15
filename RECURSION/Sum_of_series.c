#include <stdio.h>
double seriesSum(int n) {
    if (n == 1) {
        return 1.0; 
    }
    return ((n % 2 == 0) ? -1.0 / n : 1.0 / n) + seriesSum(n - 1);
}

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("N must be a positive integer.\n");
        return 1; 
    }
    double result = seriesSum(N);
    printf("The sum of the series is: %.15f\n", result);
    return 0;
}
