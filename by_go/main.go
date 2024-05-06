package main

import (
	"fmt"
)

const maxInt = int(^uint32(0) >> 1)

func main() {
	fmt.Println(maxInt)
}
