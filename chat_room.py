s = input()
h = -1
e = -1
l = -1
l1 = -1
d = []
for i in s:
    a = i.lower()
    if(a == "h" or a == "e" or a == "l" or a == "o"):
        d.append(a)
seen = []
for i in range(len(d)):
    if(d[i] in seen and d[i] != 'l'):
        d[i] = -1
    elif d[i] == 'l' and seen.count('l') == 2:
        d[i] = -1
    else:
        seen.append(d[i])

asdasd = ''
for i in d:
    if(i != -1):
        asdasd += i
print(asdasd)
if(asdasd == 'hello'):
    print("YES")
else:
    print("NO")