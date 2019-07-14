from stack import Stack

def nearestGreaterElementOnRight(arr):
    """using stack - O(n) implementation
    
    Arguments:
        arr {int} -- a list of numbers
    """
    s = Stack()
    greatArray = []
    for index, value in enumerate(arr):
        print(s.isEmpty())
        if index == len(arr) - 1:
            greatArray.append({value: -1})
            break
        
        while not s.isEmpty() and arr[s.top()] < value:
            print("in while")
            greatArray.append({arr[s.top()]: value})
            s.pop()
        else:
            print("in else")
            s.push(index)
    print(greatArray)
    return greatArray

nearestGreaterElementOnRight([5, 10, 7, 8, 3, 2, 12])