#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* nums, int numsSize, int target, int findFirst) {
    int left = 0;
    int right = numsSize - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            if (findFirst) {
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    result[0] = binarySearch(nums, numsSize, target, 1); 
    result[1] = binarySearch(nums, numsSize, target, 0); 

    return result;
}
