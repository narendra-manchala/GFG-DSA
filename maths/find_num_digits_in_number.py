import math

def count_digits(num):
    print("log: ", math.floor(math.log10(num)+1))

def count_digits_recur(num):
    if num == 0:
        return 0
    return 1+count_digits_recur(num//10)

def count_digits_iter(num):
    count = 0
    while num != 0:
        num = num//10
        count += 1
    print("iteration: ", count)

count_digits(12345)
count_digits_iter(12345)
print("iteration: ", count_digits_recur(12345))