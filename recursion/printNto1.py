def printNto1(n):
    if n == 1:
        print (1)
        return
    print(n, " ")
    printNto1(n-1)

def print1ToN(n):
    if n == 1:
        print(1)
        return
    print1ToN(n-1)
    print(n)

def print1ToNTailRecursion(n, val = 0):
    if n == val:
        return
    val = val+1
    print(val)
    print1ToNTailRecursion(n, val)

printNto1(5)
print1ToNTailRecursion(5)