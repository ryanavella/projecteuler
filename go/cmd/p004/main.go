package main

func main() {
	maxSeen := uint32(0)

	for i := uint32(0); i < 1000; i++ {
		for j := uint32(0); j < 1000; j++ {
			prod := i * j
			tmp := prod

			d1 := tmp % 10
			tmp /= 10
			d2 := tmp % 10
			tmp /= 10
			d3 := tmp % 10
			tmp /= 10
			d4 := tmp % 10
			tmp /= 10
			d5 := tmp % 10
			tmp /= 10
			d6 := tmp % 10
			tmp /= 10

			if d1 == d6 && d2 == d5 && d3 == d4 {
				if prod > maxSeen {
					maxSeen = prod
				}
			}
		}
	}
	println(maxSeen)
}
