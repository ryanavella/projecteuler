const std = @import("std");
const warn = std.debug.warn;
const assert = std.debug.assert;

fn triangular_num(n: u32) u32 {
    return n * (n + 1) / 2;
}

pub fn main() void {
    const limit: u32 = 1000 - 1;

    const sum_mul3: u32 = 3 * triangular_num(limit / 3);
    const sum_mul5: u32 = 5 * triangular_num(limit / 5);
    const sum_mul15: u32 = 15 * triangular_num(limit / 15);

    // Multiples of 15 were double-counted, so we
    // should subtract them from the result.
    const total: u32 = sum_mul3 + sum_mul5 - sum_mul15;
    warn("{}\n", total);
    assert(total == 233168);
}
