size = int(input())
array = [0] * size
seen_List = []
if(size % 2 == 0):
	for i in range(size):
		if(i not in seen_List):
			j = i + 1
			array[i] = j + 1
			array[j] = j
			seen_List.append(j)
	
	for i in array:
		print(i,end=" ")
else:
	print(-1)
