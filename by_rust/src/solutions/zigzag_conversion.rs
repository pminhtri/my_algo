#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/zigzag-conversion/
 */

pub fn convert(s: String, num_rows: i32) -> String {
    if num_rows == 1 || num_rows >= s.len() as i32 {
        return s;
    }

    let mut res = vec!["".to_string(); num_rows as usize];
    let mut i = 0;
    let mut flag = -1;

    for c in s.chars() {
        res[i as usize].push(c);

        if i == 0 || i == num_rows - 1 {
            flag = -flag;
        }

        i += flag;
    }

    res.join("")
}
