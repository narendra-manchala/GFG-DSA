from stack import Stack
def stockSpanNaive(arr):
    res = []
    for index, value in enumerate(arr):
        j = index - 1
        span = 1
        while arr[j] < value and j >= 0:
            span += 1
            j -= 1
        res.append(span)
    print(res)
    return res

def stockSpanUsingStack(arr):
    s = Stack()
    for index, value in enumerate(arr):
        # print(index, value)
        while not s.isEmpty() and arr[s.top()] < value:
            s.pop()
        else:
            s.push(index)
    print(s.size(), s.top())


stockSpanUsingStack([10,5,2,7,18,15,16,17])
stockSpanUsingStack([9,8,7,10,6,5,10])