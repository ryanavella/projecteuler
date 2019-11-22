package main

import "fmt"

func divOutFactor(x int64, d int64) int64 {
	for x%d == 0 {
		x /= d
	}
	return x
}

func largestPrimeFactor(x int64) int64 {
	var y int64

	x = divOutFactor(x, 2)
	if x == 1 {
		return 2
	}

	x = divOutFactor(x, 3)
	if x == 1 {
		return 3
	}

	y = 5
	for {
		x = divOutFactor(x, y)
		if x == 1 {
			return y
		}
		y += 2

		x = divOutFactor(x, y)
		if x == 1 {
			return y
		}
		y += 4
	}
}

func main() {
	p := largestPrimeFactor(600851475143)
	fmt.Println(p)
}
