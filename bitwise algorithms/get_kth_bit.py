def get_kth_bit(num, k):
    """Get bit at k'th position in binary of num
    
    Arguments:
        num {int} -- A number
        k {int} -- Position to get the bit
    """
    if num & 1<<k:
        return 1
    else: return 0