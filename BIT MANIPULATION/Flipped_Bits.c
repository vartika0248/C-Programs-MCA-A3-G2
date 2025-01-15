#include <stdio.h>
int countFlippedBits(int A, int B) {
    int xorValue = A ^ B;
    int count = 0;
    while (xorValue) {
        count += xorValue & 1; 
        xorValue >>= 1;        
    }
    return count;
}
int main() {
    int A, B;
    printf("Enter two integers (A and B): ");
    scanf("%d %d", &A, &B);
    int result = countFlippedBits(A, B);
    printf("Number of bits to be flipped to convert %d to %d: %d\n", A, B, result);
    return 0;
}
