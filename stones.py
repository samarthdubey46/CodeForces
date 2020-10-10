value = int(input())
stones = input() 
changes = 0
for i in range(value - 1):
	if((i) < (value - 1)):
		if(stones[i+1] == stones[i]):
			changes += 1
		
	
print(changes)
