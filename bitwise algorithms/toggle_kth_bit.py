def toggle_kth_bit(num, k):
    """Toggle a bit at kth position i.e: 1-->0 | 0-->1
    
    Arguments:
        num {int} -- number
        k {int} -- position
    """
    return num ^ (1<<k)