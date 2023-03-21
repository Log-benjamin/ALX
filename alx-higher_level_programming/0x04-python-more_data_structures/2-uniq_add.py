#!/usr/bin/python3
def uniq_add(my_list=[]):
    new_list = []
    add_result = 0
    for x in my_list:
        if x not in new_list:
            new_list.append(x)
    for y in new_list:
        add_result += y
    return add_result
