#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void findTriplets(int *nums, int size) {
    qsort(nums, size, sizeof(int), compare);
    printf("[");
    int found = 0,i; 
    for (i = 0; i < size - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i + 1;
        int right = size - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                if (found) printf(", ");
                printf("[%d,%d,%d]", nums[i], nums[left], nums[right]);
                found = 1;
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    printf("]\n");
}
int main() {
    int nums1[] = {-1, 0, 1, 2, -1, -4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: nums = [-1, 0, 1, 2, -1, -4]\nOutput: ");
    findTriplets(nums1, size1);
    int nums2[] = {0, 1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: nums = [0, 1, 1]\nOutput: ");
    findTriplets(nums2, size2);
    int nums3[] = {0, 0, 0};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Input: nums = [0, 0, 0]\nOutput: ");
    findTriplets(nums3, size3);
    return 0;
}
