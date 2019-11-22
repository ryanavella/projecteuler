#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Project Euler problem 3"""

def divide_out_factor(x, factor):
    while x % factor == 0:
        x = x // factor
    return x

def largest_prime_factor(x):
    x = divide_out_factor(x, 2)
    if x == 1:
        return 2
    x = divide_out_factor(x, 3)
    if x == 1:
        return 3
    y = 5
    while True:
        x = divide_out_factor(x, y)
        if x == 1:
            return y
        y += 2
        x = divide_out_factor(x, y)
        if x == 1:
            return y
        y += 4

def main():
    p = largest_prime_factor(600851475143)
    print(p)

if __name__ == "__main__":
    main()
