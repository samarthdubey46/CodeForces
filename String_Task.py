s = input()
v = ["A", "O", "Y", "E", "U", "I"]
d = ''
ld = -1
for i in v:
    s = s.replace(i.lower(), '')
    s = s.replace(i.upper(), '')
s = s.lower()
res = list(s)
offset = 1
res.insert(0, '.')
for i in range(len(s) - 1):
    res.insert(i + 1 + offset, '.')
    offset += 1
    # print(res)
print(''.join(res))
# print(s.lower())
#
