def clear_kth_bit(num, k):
    """Clear or unset kth bit.
    
    Arguments:
        num {int} -- Number
        k {int} -- position
    """
    return num & ~(1<<k)