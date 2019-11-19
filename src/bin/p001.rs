fn triangular_num(n: i32) -> i32 {
    n * (n + 1) / 2
}

fn main() {
    let limit = 1000 - 1;

    let sum_mul3  = 3  * triangular_num(limit / 3);
    let sum_mul5  = 5  * triangular_num(limit / 5);
    let sum_mul15 = 15 * triangular_num(limit / 15);

    // Multiples of 15 were double-counted, so we
    // should subtract them from the result.
    let total = sum_mul3 + sum_mul5 - sum_mul15;
    println!("{}", total);
}
