package main

import "fmt"
type BIT struct {
	n   int
	bit []int
}

func (b *BIT) Sum(a int) int {
	s := 0
	for i := a; i > 0; i -= (i & -i) {
		s += b.bit[i]
	}
	return s
}

func (b *BIT) Add(a, x int) {
	for i := a; i < b.n; i += (i & -i) {
		b.bit[i] += x
	}
}

func (b *BIT) Debug() {
	for _, v := range b.bit {
		fmt.Print(v)
		fmt.Print(" ")
	}
	fmt.Println()
}

func NewBIT(n int) *BIT {
	return &BIT{n + 1, make([]int, n+1)}
}

func main() {
	t := []int{4, 2, 1, 5, 8, 6, 3, 7}
	b := NewBIT(len(t))
        ans:=0
	for i, v := range t {
                ans += i-b.Sum(v)
		b.Add(v, 1)
		b.Debug()
	}
	fmt.Println(ans)

        /*
	b2 := NewBIT(len(t))
	for i, v := range t {
		b2.Add(i+1, v)
		b2.Debug()
	}
	fmt.Println(b2.Sum(len(t)))
        */
}

