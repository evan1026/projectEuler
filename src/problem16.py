#!/usr/bin/python
number = 2 ** 1000
sum = 0
while (number):
    sum += number % 10
    number /= 10

print sum
