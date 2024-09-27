package algo

func ContainerMostWater(height []int) int {
	max_area := 0
	left := 0
	right := len(height) - 1

	for left < right {
		max_area = max(max_area, (right-left)*min(height[left], height[right]))

		if height[left] < height[right] {
			left += 1
		} else {
			right -= 1
		}
	}

	return max_area
}
