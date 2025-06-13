#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/missing-number/
 */

pub fn missing_number(nums: Vec<i32>) -> i32 {
    let sum1: i32 = nums.iter().sum();
    let sum2: i32 = (nums.len() * (nums.len() + 1) / 2) as i32;

    sum2 - sum1
}
