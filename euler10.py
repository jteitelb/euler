#!/usr/bin/python

#TODO: implement sieve of eratosthenes for efficient version
def isPrime(n):
    if n == 2:
        return True
    if n%2 == 0:
        return False
    for i in xrange(2,int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

currentNum = 3
sum = 2
while(currentNum < 2000000):
    if isPrime(currentNum):
        sum+= currentNum
    currentNum+= 2

print sum
