#!/usr/bin/python3
for benji in range(97, 123):
    if benji == 101 or benji == 113:
        continue
    print("{:c}".format(benji), end="")
