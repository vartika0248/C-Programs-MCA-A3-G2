#include <stdio.h>
int modularExponentiation(int a, int b, int c) {
    if (b == 0)
        return 1 % c;
    long long half = modularExponentiation(a, b / 2, c);
    half = (half * half) % c;
    if (b % 2 == 0)
        return (int)half;
    else
        return (int)((half * a) % c);
}
int main() {
    int a, b, c;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < 0)
        a = (a % c + c) % c;
    int result = modularExponentiation(a, b, c);
    printf("Result: %d\n", result);
    return 0;
}
