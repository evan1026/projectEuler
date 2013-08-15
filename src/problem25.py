#!/usr/bin/python
prev1 = 1
prev2 = 1

def findDigits(num):
    tempNum = num
    digits = 0
    while(tempNum):
        digits += 1
        tempNum /= 10
    return digits

def fibNextIsTheOne():
    global prev1
    global prev2
    nextOne = prev1 + prev2
    prev2 = prev1
    prev1 = nextOne
    return findDigits(prev1) >= 1000
   
counter = 2 #skipped 1 and 1
while (not fibNextIsTheOne()):
    counter += 1

counter += 1 #count the one we just got
print counter
