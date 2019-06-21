def set_kth_bit(num, k):
    """Set a bit at Kth position.
    
    Arguments:
        num {int} -- A number
        k {int} -- positin in binary of num to change it to set
    """
    return num | (1<<k)