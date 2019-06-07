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