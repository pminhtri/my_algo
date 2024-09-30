package leetcode

func ZigzagConversion(s string, numRows int) string {
	if numRows == 1 || numRows >= len(s) {
		return s
	}

	res := ""
	rows := make([][]string, numRows)
	idx, diff := 0, 1

	for c := range s {
		rows[idx] = append(rows[idx], string(s[c]))
		idx += diff
		if idx == 0 || idx == numRows-1 {
			diff = -diff
		}
	}

	for i := range rows {
		element := rows[i]

		for _, v := range element {
			res += v
		}
	}

	return res
}
