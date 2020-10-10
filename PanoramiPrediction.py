x, y = input().split()
x = int(x)
y = int(y) 
if(x != 1):
	value = x
	isPrime = True
	prime_after_value = 0
	def checkIfPrime(number,current):
		if(current == 1):
			return True
		if(number % current == 0):
			return False
		return checkIfPrime(number,current - 1)

	def Tell_Prime_After(original,val):
		if(checkIfPrime(val,val - 1)):
			return val
		return Tell_Prime_After(original,val + 1)
	isPrime = checkIfPrime(value,value - 1)
	if(isPrime):
		prime_after_value = Tell_Prime_After(value,value + 1)
		if(prime_after_value == y):
			print("YES")
		else:
			print("NO")
