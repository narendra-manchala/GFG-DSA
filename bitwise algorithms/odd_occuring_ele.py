def odd_occuring_ele(arr):
    """Find the odd occuring element in the arr list.
    
    Arguments:
        arr {list} -- List of integers with one odd curring element.
    """
    ele = arr[0]
    for i in arr[1:]:
        ele = ele ^ i
    return ele if ele else -1

#TODO: Multiple odd occuring elements?