#include <stdio.h>
long long fibonacci(int n) {
	int i;
    long long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is: %lld\n", n, fibonacci(n));
    return 0;
}
