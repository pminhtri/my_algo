package main

func reverseInteger(x int) int {
	if x == 0 {
		return 0
	}

	const maxInt = int(^uint32(0) >> 1)
	var reversed int
	var temp = x

	if x < 0 {
		temp = -x
	}

	for temp != 0 {

		if reversed > maxInt/10 || (reversed == maxInt/10 && temp%10 > 7) {
			return 0
		}

		if reversed < -maxInt/10 || (reversed == -maxInt/10 && temp%10 < -8) {
			return 0
		}

		reversed = reversed*10 + temp%10
		temp /= 10
	}

	if x < 0 {
		return -reversed
	}

	return reversed
}
