pub fn binary_sort<T: Ord>(arr: &mut [T]) {
    let n = arr.len();
    for i in 1..n {
        let mut left = 0;
        let mut right = i - 1;
        let mut mid = 0;
        while left <= right {
            mid = left + (right - left) / 2;
            if arr[mid] < arr[i] {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        let mut j = i;
        while j > left {
            arr.swap(j, j - 1);
            j -= 1;
        }
    }
}
