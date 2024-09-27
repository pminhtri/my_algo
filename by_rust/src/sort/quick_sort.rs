pub fn quick_sort<T: Ord>(arr: &mut [T]) {
    let n = arr.len();
    if n <= 1 {
        return;
    }
    let pivot = partition(arr);
    quick_sort(&mut arr[..pivot]);
    quick_sort(&mut arr[pivot + 1..]);
}

fn partition<T: Ord>(arr: &mut [T]) -> usize {
    let n = arr.len();
    let pivot = n - 1;
    let mut i = 0;
    for j in 0..n {
        if arr[j] < arr[pivot] {
            arr.swap(i, j);
            i += 1;
        }
    }
    arr.swap(i, pivot);
    i
}
