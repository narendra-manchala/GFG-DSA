def log_base_2(num):
    """Find log base 2 of a num.
    
    Arguments:
        num {int} -- number
    """
    res = 0
    while num > 1:
        num = num >> 1
        res += 1
    return res