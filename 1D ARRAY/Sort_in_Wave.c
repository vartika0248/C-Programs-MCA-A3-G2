#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortInWave(int arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    for (i = 0; i < n - 1; i += 2) {
        swap(&arr[i], &arr[i + 1]);
    }
}
int main() {
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80},i;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sortInWave(arr, n);
    printf("Wave-form sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
