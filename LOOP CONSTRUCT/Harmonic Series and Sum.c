#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input range
    printf("Enter the range: ");
    scanf("%d", &n);

    // Display the harmonic sequence
    printf("Harmonic Sequence is: ");
    for (i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) {
            printf(" + ");
        }
        sum += 1.0 / i; // Add the reciprocal to the sum
    }

    // Display the sum
    printf("\nSum of harmonic series: %.6f\n", sum);

    return 0;
}
