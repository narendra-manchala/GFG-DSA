def rev_array(arr):
    rev_arr = []
    for i in arr:
        rev_arr.insert(0, i)
    return rev_arr

def rev_arr_rec(arr):
    if not arr:
        return
    rev_arr_rec(arr[1:])
    print(arr[0])

def rev_arr_tail_rec(arr, rev_arr=[]):
    if not arr:
        return rev_arr
    
    return rev_arr_tail_rec(arr[1:], rev_arr.insert(0, arr[0]))

def rev_arr2(arr):
    low = 0
    high = len(arr) - 1
    while low < high:
        arr = swap_with_out_temp (arr, low, high)
        low += 1
        high -= 1
    return arr
    
def swap_with_out_temp(arr, low, high):
    arr[low],arr[high] = arr[high], arr[low]
    return arr

def swap_with_temp(arr, low, high):
    temp = arr[low]
    arr[low] = arr[high]
    arr[high] = arr[low]
    return arr


print(rev_arr2([1,2,3,4,5]))

# print(rev_arr_tail_rec([1,2,3,4,5]))
# rev_arr_rec([1,2,3,4])
# print(rev_array([1,2,3,4,5]))