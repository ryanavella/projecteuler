fn div_out_factor(mut x: i64, factor: i64) -> i64 {
    while x % factor == 0 {
        x /= factor;
    }
    x
}

fn largest_prime_factor(mut x: i64) -> i64 {
    x = div_out_factor(x, 2);
    if x == 1 {
        return 2;
    }

    x = div_out_factor(x, 3);
    if x == 1 {
        return 2;
    }

    let mut y = 5;
    loop {
        x = div_out_factor(x, y);
        if x == 1 {
            break y;
        }
        y += 2;

        x = div_out_factor(x, y);
        if x == 1 {
            break y;
        }
        y += 4;
    }
}

fn main() {
    let p = largest_prime_factor(600_851_475_143);
    println!("{}", p);
}
