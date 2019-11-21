package main

import "fmt"

func triangularNum(n int) int {
	return n * (n + 1) / 2
}

func main() {
	limit := 1000 - 1

	sum3 := 3 * triangularNum(limit/3)
	sum5 := 5 * triangularNum(limit/5)
	sum15 := 15 * triangularNum(limit/15)

	// Multiples of 15 were double-counted, so we
	// should subtract them from the result.
	tot := sum3 + sum5 - sum15
	fmt.Println(tot)
}
