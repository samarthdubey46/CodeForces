import random


def right(total, points):
    high = points[0]
    low = points[0]
    amazing = 0
    for i in points:
        if i < low:
            amazing += 1
            low = i
        elif i > high:
            amazing += 1
            high = i
    return amazing


def wrong(value, array):
    lowest = 0
    highest = 0
    amazing = 0
    for i in array:
        if i != array[0]:
            if lowest > i:
                amazing += 1
                lowest = i
            elif highest < i:
                amazing += 1
                highest = i
        else:
            lowest = i
            highest = i
    return amazing


def check(maxlen, maxinput):
    number = random.randint(1, maxlen)
    array = []
    for i in range(120):
        tem = []
        for i in range(number):
            temp_ = ''
            for i in range(5):
                temp_ += str(random.randint(1, maxinput))
            tem.append(int(temp_))
        array.append(tem)
    right__ = []
    wrong__ = []
    for i in array:
        r_ = right(number, i)
        w_ = wrong(number, i)
        if r_ != w_:
            wrong__.append(i)
        else:
            right__.append(i)
    print(f"{len(right__)} Corect answer")
    print(f"{len(wrong__)} Wrong answer")
    for i in wrong__:
        print(i)


po = int(input())
at = [x for x in map(int,input().split())]
nu = wrong(po,at)
asd = right(po,at)
print(nu)
print(asd)
