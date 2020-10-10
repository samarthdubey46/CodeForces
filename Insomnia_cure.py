import math

def lcm(a, b):
    return abs(a*b) // math.gcd(a, b)

k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())
harmed = 0
#if(k <= d and l <= d and m <= d and n <= d ):
#	for i in range(1,d+1):
#		if(i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0):
#			harmed += 1
#print( harmed)

a = [k,l,m,n]

for i in a:
	harmed += d//i

for i in range(4):
	for j in range(i+1,4):
		harmed -= d//lcm(a[i],a[j])

for i in range(4):
	for j in range(i+1,4):
		for z in range(j+1,4):
			harmed += d//(lcm(lcm(a[i],a[j]),a[z]))

harmed -= d//lcm(lcm(lcm(k,l),m),n) 
print(harmed)
