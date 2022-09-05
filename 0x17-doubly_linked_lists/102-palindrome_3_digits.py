#!/usr/bin/python3
def ispalindrome(n):
    return str(n) == str(n)[::-1]

my_list=[]
for first_num in range(100,1000):
    for second_num in range(100,1000):
        product = first_num*second_num
        if ispalindrome(product):
            my_list.append(product)
print(max(my_list))
