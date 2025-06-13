#[allow(unused)]
/**
 * Problem: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 */
pub fn letter_combinations(digits: String) -> Vec<String> {
    let mut res: Vec<String> = vec![];
    if digits.is_empty() {
        return res;
    }

    let digit_array: Vec<u8> = digits.bytes().map(|b| b - b'0').collect();
    let digit_to_letter = vec![
        vec!['a', 'b', 'c'],
        vec!['d', 'e', 'f'],
        vec!['g', 'h', 'i'],
        vec!['j', 'k', 'l'],
        vec!['m', 'n', 'o'],
        vec!['p', 'q', 'r', 's'],
        vec!['t', 'u', 'v'],
        vec!['w', 'x', 'y', 'z'],
    ];

    for &digit in &digit_array {
        let letters = &digit_to_letter[(digit - 2) as usize];
        if res.is_empty() {
            res = letters.iter().map(|&c| c.to_string()).collect();
        } else {
            let mut new_res: Vec<String> = vec![];
            for letter in letters {
                for s in &res {
                    new_res.push(format!("{}{}", s, letter));
                }
            }
            res = new_res;
        }
    }

    return res;
}
