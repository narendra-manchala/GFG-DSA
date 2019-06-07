"""
    Q: Given a rope of length "n", cut it into max no of peices of length given in
        list "l"
    eg: n = 5, l = [1,2,3] => no.of peices = 5
        n = 5, l - [2,3,4] => no.of peices = 2
        n = 5, l = [2,4,6] => no.of peices = -1
"""

def max_peices(length, lengthSet):
    if length < 0:
        return -1
    if length == 0:
        return 0
    cA = max_peices(length - lengthSet[0], lengthSet)
    cB = max_peices(length - lengthSet[1], lengthSet)
    cC = max_peices(length - lengthSet[2], lengthSet)

    maxNum = max(cA, cB, cC)

    if maxNum == -1:
        return -1
    else:
        return maxNum + 1

print(max_peices(5, [5,5,5]))