#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Project Euler problem 2"""

def fibs_up_to(n):
    list_ = [1, 2]
    while list_[-1] < n:
        list_.append(list_[-1] + list_[-2])
    return list_

def main():
    fibs = fibs_up_to(4000000)
    tot = sum([x for x in fibs if x % 2 == 0])
    print(tot)

if __name__ == "__main__":
    main()
