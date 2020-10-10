import os
def solve():
	m,n = input().split()
	n = int(n)
	a = [x for x in map(int,input().split())]
	rem = int(m)
	while (1):
		for i in range(len(a)):
			if (a[i] > 0):
				if (rem == 1):
					print(i + 1)
					return
				a[i] -= n
				if (a[i] <= 0):
					rem-= 1
solve()

