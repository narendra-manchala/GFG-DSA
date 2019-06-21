def power_of_2(n):
    """Find if the number is power of 2 or not.
    
    Arguments:
        n {int} -- The number to find if it is power of 2 or not.

    Explanation:
        1. In binary a power of 2 has only one 1. So doing a bitwise-and with n-1
            will give us 0 if it is power of 2.
            eg: n = 4  (100)
                n-1 = 3(011)
                4&3 =>  000
        2. For n is 0, explecitly need to return false. 
    """
    if n and not n&n-1:
        print(True)
    else: print(False)