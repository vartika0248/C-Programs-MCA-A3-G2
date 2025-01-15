#include <stdio.h>
int sum_of_divisors(int num) {
    int sum = 0,i;
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int are_amicable(int num1, int num2) {
    int sum1 = sum_of_divisors(num1);
    int sum2 = sum_of_divisors(num2);

    return (sum1 == num2 && sum2 == num1);
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (are_amicable(num1, num2)) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }
    return 0;
}
