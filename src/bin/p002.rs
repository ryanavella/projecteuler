/*
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

Every 3rd term is even. We want to find a way 
to express f(n) in terms of f(n-3*k)
    f(n) = f(n-1) + f(n-2)
    f(n) = (f(n-2)+f(n-3)) + (f(n-3)+f(n-4))
    f(n) = 2*f(n-3) + f(n-2) + f(n-4)
    f(n) = 2*f(n-3) + (f(n-3)+f(n-4)) + (f(n-5)+f(n-6))
    f(n) = 3*f(n-3) + f(n-4) + f(n-5) + f(n-6)

Note that f(n-4) + f(n-5) == f(n-3), therefore:
    f(n) = 4*f(n-3) + f(n-6)
*/

fn main() {
    let limit = 4_000_000;
    let mut a1 = 0;
    let mut a2 = 2;
    let mut sum = 2;
    loop {
        let a3 = 4*a2 + a1;
        a1 = a2;
        a2 = a3;
        if a3 > limit {
            break;
        }
        sum += a3;
    }
    println!("{}", sum);
}
