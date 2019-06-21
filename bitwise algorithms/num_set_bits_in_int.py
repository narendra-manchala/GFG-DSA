def num_set_bits_in_int(n):
    """Find number of set bits(1's) in a binary number.
    
    Arguments:
        n {int} -- A binary number.

    Explanation:
        -->Brian Kernighan's Algorithm<--
        1. Calc number of steps needed to make the given number "n" to 0 by
            repeatedly doing bitwise-and with n and n-1.
        
        Reduces time complexity to no.of set bits, instead of O(n).
    """
    num_sets = 0
    while n>0:
        n = n & n-1
        num_sets += 1
    return num_sets

#TODO: Implement using Lookup table(O(1)).