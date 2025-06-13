use std::collections::HashSet;

#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 */

pub fn method1(nums: Vec<i32>) -> Vec<i32> {
    let mut nums = nums;
    let mut res = vec![];
    for i in 0..nums.len() {
        let index = (nums[i].abs() - 1) as usize;
        if nums[index] > 0 {
            nums[index] = -nums[index];
        }
    }
    for i in 0..nums.len() {
        if nums[i] > 0 {
            res.push(i as i32 + 1);
        }
    }
    res
}

pub fn method2(nums: Vec<i32>) -> Vec<i32> {
    let mut res: Vec<i32> = Vec::new();
    let set: HashSet<i32> = nums.iter().cloned().collect();

    let n = (nums.len() + 1) as i32;

    for i in 1..n {
        if !set.contains(&i) {
            res.push(i);
        }
    }

    res
}
