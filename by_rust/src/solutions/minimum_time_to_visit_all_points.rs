#[allow(unused)]

/**
 * Problem: https://leetcode.com/problems/minimum-time-visiting-all-points/description/
 */

pub fn method1(points: Vec<Vec<i32>>) -> i32 {
    if points.len() <= 1 {
        return 0;
    }

    let mut res = 0;

    for i in 0..points.len() - 1 {
        let current = &points[i];
        let next = &points[i + 1];

        let x = (current[0] - next[0]).abs();
        let y = (current[1] - next[1]).abs();

        res += std::cmp::max(x, y);
    }

    res
}

#[allow(unused)]

pub fn method2(points: Vec<Vec<i32>>) -> i32 {
    points
        .windows(2)
        .map(|w| {
            let delta_x = (w[0][0] as i32).abs_diff(w[1][0]);
            let delta_y = (w[0][1] as i32).abs_diff(w[1][1]);
            delta_x.max(delta_y)
        })
        .sum::<u32>() as i32
}
