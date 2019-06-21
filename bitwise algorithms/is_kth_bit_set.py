def is_kth_bit_set(n, k):
    """Find if 'k'th bit is set (i.e 1) in binary number 'n'.
    
    Arguments:
        n {int} -- an integer
        k {int} -- position of the bit to be checked for set or not.

    Explanation:
        1. Generate a number whose k-th bit is set (1<<k-1).
        2. bitwise and with number and k-th bit generated will give either a 1 or 0; 
    """
    if (n&(1<<(k-1)) != 0):
        print(True)
    else:
        print(False)

#TODO: How to do with left shift operator?