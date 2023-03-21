#!/usr/bin/python3
for c in range(100):
    if c % 10 != c / 10 and c % 10 > c / 10:
        print("{:02d}".format(c), end='')
        if (c / 10 < 8):
            print(", ", end="")
print()
