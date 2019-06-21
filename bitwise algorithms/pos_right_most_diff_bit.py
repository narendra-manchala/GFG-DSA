"""Find the position of the right most different bit among two binary numbers.
"""

def pos_right_most_diff_bit(m, n):
    if (m == n): return -1
    found = False
    k = 0
    while not found:
        if (m^n)&(1<<k):
            found = True
        k +=1
    return k