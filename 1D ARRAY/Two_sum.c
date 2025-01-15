#include <stdio.h>
void twoSum(int* nums, int numsSize, int target, int result[2]) {
	int i,j;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return; 
            }
        }
    }
}
int main() {
    int nums[] = {2, 7, 11, 15}; 
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result[2] = {-1, -1};
    twoSum(nums, numsSize, target, result);
    printf("Output: [%d, %d]\n", result[0], result[1]);
    return 0;
}
