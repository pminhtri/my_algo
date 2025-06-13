#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
 */

/**
 * origin = [9,5,2,2,1]
 * sorted = [1,2,2,5,9]
 * output = [4,3,1,1,0]
 */

pub fn method1(nums: Vec<i32>) -> Vec<i32> {
    let mut temp_arr: Vec<i32> = nums.clone();
    temp_arr.sort();
    let mut map = std::collections::HashMap::<i32, i32>::new();

    for (idx, val) in temp_arr.iter().enumerate() {
        if !map.contains_key(&val) {
            map.insert(*val, idx as i32);
        }
    }

    let mut res = Vec::<i32>::with_capacity(nums.len());

    for n in &nums {
        let val = *map.get(n).unwrap();
        res.push(val);
    }

    res
}

#[allow(unused)]
/**
 * Constraints 0 < nums[i] < 100
 */

pub fn method2(nums: Vec<i32>) -> Vec<i32> {
    let mut counts = [0; 101];
    for n in nums.iter() {
        counts[*n as usize] += 1;
    }

    for i in 1..counts.len() {
        counts[i] += counts[i - 1];
    }

    let mut res = Vec::with_capacity(nums.len());
    res.extend(nums.iter().map(|&num| {
        if num == 0 {
            0
        } else {
            counts[num as usize - 1]
        }
    }));

    res
}
