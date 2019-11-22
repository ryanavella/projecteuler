fn main() {
    let limit = 4_000_000;
    let mut a1 = 0;
    let mut a2 = 2;
    let mut sum = 2;
    loop {
        // Every third term is even
        // f(n) = 4*f(n-3) + f(n-6)
        let a3 = 4 * a2 + a1;
        a1 = a2;
        a2 = a3;
        if a3 > limit {
            break;
        }
        sum += a3;
    }
    println!("{}", sum);
}
