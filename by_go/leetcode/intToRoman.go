package leetcode

func IntToRoman(num int) string {
	var res string
	romanMap := []struct {
		val    int
		symbol string
	}{
		{1000, "M"},
		{900, "CM"},
		{500, "D"},
		{400, "CD"},
		{100, "C"},
		{90, "XC"},
		{50, "L"},
		{40, "XL"},
		{10, "X"},
		{9, "IX"},
		{5, "V"},
		{4, "IV"},
		{1, "I"},
	}

	for _, v := range romanMap {
		for num >= v.val {
			num -= v.val
			res += v.symbol
		}
	}

	return res
}
