def get_all_index(array,ele):
	indices = []
	for i in enumerate(array):
		if(i[1] == ele):
			indices.append(i[0])
	return indices	

length = int(input())
s = [x for x in map(int,input().split())] 
d = min(s)
max_ = max(s)
min_index = get_all_index(s,d)[-1]
max_index = get_all_index(s,max_)[0]
sub_value = 0
if(max_index > min_index):
	sub_value = 1
min_index = (length - 1) - min_index
max_index = max_index - 0
print((max_index + min_index) - sub_value)
