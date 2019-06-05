#include <iostream>

int factorial(int n)
{
    if (n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int factorialTailRecursion(int n, int result=1)
{
    if (n==1 || n==0)
        return result;
    return factorialTailRecursion(n-1, result*n);
}

int main()
{
    std::cout << factorialTailRecursion(4);
}