pub fn longest_palindrome(s: String) -> String {
    let len = s.len();
    if len == 0 {
        return String::new();
    }

    let bytes = s.as_bytes();
    let mut start = 0;
    let mut max_len = 1;

    // Function to expand around the center
    fn expand_around_center(bytes: &[u8], left: usize, right: usize) -> (usize, usize) {
        let mut l = left as isize;
        let mut r = right as isize;
        while l >= 0 && r < bytes.len() as isize && bytes[l as usize] == bytes[r as usize] {
            l -= 1;
            r += 1;
        }
        ((l + 1) as usize, (r - 1) as usize)
    }

    for i in 0..len {
        // Check for odd-length palindromes
        let (left1, right1) = expand_around_center(&bytes, i, i);
        let len1 = right1 - left1 + 1;

        // Check for even-length palindromes
        if i + 1 < len {
            let (left2, right2) = expand_around_center(&bytes, i, i + 1);
            let len2 = right2 - left2 + 1;

            // Update if we find a longer palindrome
            if len2 > max_len {
                max_len = len2;
                start = left2;
            }
        }

        // Update if the odd palindrome is the longest
        if len1 > max_len {
            max_len = len1;
            start = left1;
        }
    }

    s[start..start + max_len].to_string()
}
