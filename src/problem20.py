#!/usr/bin/python
from math import factorial

num = factorial(100)
sum = 0

while (num):
    sum += num % 10
    num /= 10

print sum
