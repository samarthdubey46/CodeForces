total = int(input()) 
drinks = [x for x in map(int,input().split())]
sum_ = 0
for i in drinks:
	sum_ += i / 100
a = ((sum_/total) * 100)
print ('%.12f'%a) 

