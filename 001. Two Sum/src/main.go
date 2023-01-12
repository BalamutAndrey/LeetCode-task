// package main

// import (
// 	"fmt"
// )

func twoSum(nums []int, target int) []int {
	var result []int

	numsLen := len(nums)
	for i := 0; i < numsLen; i++ {
		for n := (i + 1); n < numsLen; n++ {
			if (nums[i] + nums[n]) == target {
				result = append(result, i, n)
				return result
			}
		}
	}
	return nil
}

// func main() {
// 	nums := []int{3, 2, 4}
// 	var target = 6

// 	fmt.Println(twoSum(nums, target))
// }
