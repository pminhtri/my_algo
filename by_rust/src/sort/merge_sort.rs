pub fn merge_sort<T: Ord + Clone>(arr: &mut [T]) {
    let n = arr.len();
    if n <= 1 {
        return;
    }
    let mid = n / 2;
    let mut left = arr[..mid].to_vec();
    let mut right = arr[mid..].to_vec();
    merge_sort(&mut left);
    merge_sort(&mut right);
    merge(arr, &left, &right);
}

fn merge<T: Ord + Clone>(arr: &mut [T], left: &[T], right: &[T]) {
    let mut i = 0;
    let mut j = 0;
    let mut k = 0;
    let n_left = left.len();
    let n_right = right.len();
    while i < n_left && j < n_right {
        if left[i] <= right[j] {
            arr[k] = left[i].clone();
            i += 1;
        } else {
            arr[k] = right[j].clone();
            j += 1;
        }
        k += 1;
    }
    while i < n_left {
        arr[k] = left[i].clone();
        i += 1;
        k += 1;
    }
    while j < n_right {
        arr[k] = right[j].clone();
        j += 1;
        k += 1;
    }
}
