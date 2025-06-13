#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/two-sum/
 */

pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut map = std::collections::HashMap::new();
    for (idx, &num) in nums.iter().enumerate() {
        let complement = target - num;

        if map.contains_key(&complement) {
            let previous_idx = map.get(&complement).unwrap();
            return vec![*previous_idx as i32, idx as i32];
        }

        map.insert(num, idx);
    }
    vec![]
}
