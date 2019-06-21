def rotate_array(arr, d):
    """Rotate an array 'arr' 'd' times.
    
    Arguments:
        arr {array} -- The array to be rotated
        d {int} -- no.of times the array to be rotated
    """
    for i in range(d):
        print(i)
        arr.append(arr[0])
        arr = arr[1:]
    return arr

print(rotate_array([1,2,3,4,5], 4))