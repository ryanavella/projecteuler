package main

func main() {
	limit := 4000000
	a1 := 0
	a2 := 2
	sum := 2
	for {
		// Every third term is even
		// f(n) = 4*f(n-3) + f(n-6)
		a3 := 4*a2 + a1
		a1 = a2
		a2 = a3
		if a3 > limit {
			break
		}
		sum += a3
	}
	println(sum)
}
