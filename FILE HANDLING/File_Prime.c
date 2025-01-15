#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num) {
	int i;
    if (num <= 1) {
        return false;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    FILE *file = fopen("Prime.txt", "w"); 
    int i;
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    for (i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            fprintf(file, "%d\n", i); 
        }
    }
    fclose(file); 
    printf("Prime numbers between 1 and 100 have been written to Prime.txt.\n");
    return 0;
}
