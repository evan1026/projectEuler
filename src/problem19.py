#!/usr/bin/python
import datetime

startDay = datetime.date(1901, 1, 1)
endDay = datetime.date(2000, 12, 31)
currDay = startDay
count = 0

while (currDay < endDay):
    if (currDay.month < 12):
        currDay = currDay.replace(month = (currDay.month + 1))
    else:
        currDay = currDay.replace(month = 1, year = currDay.year + 1)

    if (currDay.weekday() == 6):
        count += 1

print count
