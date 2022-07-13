package main

import (
	"fmt"
)

func main() {
	var test int
	fmt.Scan(&test)
	for t := 1; t <= test; t++ {
		var n int
		fmt.Scan(&n)
		fmt.Println(2)
		// vector := make([]int, 0)
		for i := 1; i <= n; i += 2 {
			for j := i; j <= n; j *= 2 {
				// vector = append(vector, j)
				fmt.Print(j)
				fmt.Print(" ")
			}
		}
		// fmt.Println(vector)
	}
}
