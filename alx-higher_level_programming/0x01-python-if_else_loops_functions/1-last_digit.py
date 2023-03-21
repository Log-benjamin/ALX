#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    val = number % -10
else:
    val = number % 10
if val > 5:
    print(f"Last digit of {number:d} is {val:d} and is greater than 5")
elif val == 0:
    print(f"Last digit of {number:d} is {val:d} and is 0")
elif val < 6 and val != 0:
    print(f"Last digit of {number:d} is {val:d} and is less than 6 and not 0")
