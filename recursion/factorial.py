def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)

def factorialTailRecursion(n, k=1):
    if n == 0:
        return k
    return factorialTailRecursion(n-1, n*k)

print(factorial(5))
print(factorialTailRecursion(5))