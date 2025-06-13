#[allow(unused)]

pub fn three_sum(nums: Vec<i32>) -> Vec<Vec<i32>> {
    let mut res = vec![];
    let mut nums = nums;
    nums.sort();
    for i in 0..nums.len() {
        if i > 0 && nums[i] == nums[i - 1] {
            continue;
        }
        let mut j = i + 1;
        let mut k = nums.len() - 1;
        while j < k {
            if j > i + 1 && nums[j] == nums[j - 1] {
                j += 1;
                continue;
            }
            if k < nums.len() - 1 && nums[k] == nums[k + 1] {
                k -= 1;
                continue;
            }
            let sum = nums[i] + nums[j] + nums[k];
            if sum == 0 {
                res.push(vec![nums[i], nums[j], nums[k]]);
                j += 1;
                k -= 1;
            } else if sum < 0 {
                j += 1;
            } else {
                k -= 1;
            }
        }
    }
    res
}
