def gen_power_set(string):
    """Generate all the subsets of a string.
    
    Arguments:
        string {str} -- A string
    """
    count = 1 << len(string) # equals 2^len(string)
    for i in range(count):
        sub_string = ""
        for j in range(len(string)):
            if (i&(1<<j) >0):
                sub_string += string[j]
        print(sub_string)
    