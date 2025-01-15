#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int findMinDifference(int arr[], int n, int m) {
    if (m == 0 || n == 0) {
        return 0;
    }
    qsort(arr, n, sizeof(int), compare);
    int minDiff = 9999999999;
    int i;
    for (i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    return minDiff;
}
int main() {
    int n, m,i;
    printf("Enter the number of packets: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the number of chocolates in each packet: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of students: ");
    scanf("%d", &m);
    if (m > n) {
        printf("Number of students cannot be greater than the number of packets.\n");
        return 1;
    }
    int result = findMinDifference(arr, n, m);
    printf("The minimum difference is %d\n", result);
    return 0;
}
