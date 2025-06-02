package leetcode

func expandAroundCenter(s string, left, right int) int {
	for left >= 0 && right < len(s) && s[left] == s[right] {
		left--
		right++
	}

	return right - left - 1
}

func LongestPalindrome(s string) string {
	if len(s) == 0 {
		return ""
	}

	var start, end int

	for i := range len(s) {
		len1 := expandAroundCenter(s, i, i)
		len2 := expandAroundCenter(s, i, i+1)
		length := max(len1, len2)

		if length > end-start {
			start = i - (length-1)/2
			end = i + length/2
		}
	}

	return s[start : end+1]
}
