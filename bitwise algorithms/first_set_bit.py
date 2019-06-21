from log_base_2 import log_base_2

def firstSetBit(n):
    if n & 1:
        return 1
    elif not (n & n-1):
        return log_base_2(n)+1
    else:
        return n - (1 << log_base_2(n-1))
