use std::collections::HashSet;

#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/contains-duplicate/description/
 */

pub fn contains_duplicate(nums: Vec<i32>) -> bool {
    let set: HashSet<i32> = nums.iter().cloned().collect();
    if (set.len() == nums.len()) {
        return false;
    }

    true
}
