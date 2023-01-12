___
## 001. Two Sum 

**<span style="color:green">Easy</span>**, **`Go` `C`**
___
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have ***exactly* one solution**, and you may not use the same element twice.

You can return the answer in any order.

**Constraints:**
* 2 <= `nums.length` <= 104
* -109 <= `nums[i]` <= 109
* -109 <= `target` <= 109
* Only **one** valid answer exists.

___
**Example 1:**
* **Input:** `nums` = [2,7,11,15], `target` = 9
* **Output:** [0,1]
* **Explanation:** Because `nums[0]` + `nums[1]` == 9, we return **[0, 1]**.


**Example 2:**
* **Input:** `nums` = [3,2,4], `target` = 6
* **Output:** [1,2]

**Example 3:**
* **Input:** `nums` = [3,3], `target` = 6
* **Output:** [0,1]

---

#### C:
```C
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //...
}
```
---
#### Go:
```Go
func twoSum(nums []int, target int) []int {
    //...
}
```
---