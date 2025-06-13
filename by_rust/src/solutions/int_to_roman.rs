#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/integer-to-roman/
 */

pub fn int_to_roman(num: i32) -> String {
    let mut num = num;
    let mut roman = String::new();
    let roman_map = vec![
        (1000, "M"),
        (900, "CM"),
        (500, "D"),
        (400, "CD"),
        (100, "C"),
        (90, "XC"),
        (50, "L"),
        (40, "XL"),
        (10, "X"),
        (9, "IX"),
        (5, "V"),
        (4, "IV"),
        (1, "I"),
    ];

    for (value, symbol) in roman_map {
        while num >= value {
            roman.push_str(symbol);
            num -= value;
        }
    }

    roman
}
