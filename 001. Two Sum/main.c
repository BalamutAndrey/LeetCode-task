/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i = 0;
    int n = 0;
    int *result;
    result = malloc(2 * sizeof(int));
    while (i < numsSize) {
        n = i + 1;
        while (n < numsSize) {
            if ((nums[i] + nums[n]) == target) {
                result[0] = i;
                result[1] = n;
                *returnSize = 2;
                return (result);
            }
            n++;
        }
        i++;
    }
    *returnSize = 0;
    return (0);
}
