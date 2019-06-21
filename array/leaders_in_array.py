def leaders_in_array(arr):
    """All elements in array which doesn't have a greater element to the 
        right of it.
    
    Arguments:
        arr {arr} -- A list of numbers

    Analysis:
        O(n^2)  
    """ 
    leaders = []

    for (i, val) in enumerate(arr): # n times
        leader = True
        for j in arr[i:]: # n-i times
            if val < j:
                leader = False
                break
        if leader:
            leaders.append(val)
    print(leaders)
    return leaders

def leader_in_array_2(arr):
    """All elements in array which doesn't have a greater element to the 
        right of it.
    
    Arguments:
        arr {arr} -- A list of numbers
    
    Analysis:
        O(n)
    """
    highest_el = 0
    for i, val in enumerate(arr):
        
        if arr[len(arr) - 1 - i] > highest_el:
            print(arr[len(arr) - 1 -i])
            highest_el = arr[len(arr) - 1 - i]

leader_in_array_2([5,4,3,2,1])
# leaders_in_array([5,4,8,2,1])