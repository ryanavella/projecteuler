#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Project Euler problem 1"""

def main():
    tot = sum([x for x in range(1000) if x % 3 == 0 or x % 5 == 0])
    print(tot)

if __name__ == "__main__":
    main()
