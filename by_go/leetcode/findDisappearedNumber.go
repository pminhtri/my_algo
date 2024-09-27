package algo

import "math"

func FindDisappearedNumbers(nums []int) []int {
	res := []int{}

	for i := 0; i < len(nums); i++ {
		idx := int(math.Abs(float64(nums[i])) - 1)
		if nums[idx] > 0 {
			nums[idx] = -nums[idx]
		}
	}

	for i := 0; i < len(nums); i++ {
		if nums[i] > 0 {
			res = append(res, i+1)
		}
	}

	return res
}
