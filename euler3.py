#!/usr/bin/python

def isPrime(n):
	if n == 2:
		return True
	for i in xrange(3,n,2):
		if n % i == 0:
			return False
	return True
		
def largestPrimeFactor(n):
	for i in xrange(2, n):
		if n % i == 0 and isPrime(n/i):
			return n/i
	return n

print(largestPrimeFactor(600851475143))

