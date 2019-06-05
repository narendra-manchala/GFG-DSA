#include <iostream>
#include <math.h>

int countDigitIter(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n/10;
        ++count;
    }
    return count;
}

int countDigitRecur(long n)
{
    if(n==0)
        return 0;
    return 1+countDigitRecur(n/10);
}

int countDigitLog(long n)
{
    return floor(log10(n)+1);
}

int main()
{
    int iter = countDigitIter(12345);
    int recur = countDigitRecur(12345);
    int logVal = countDigitLog(12345);
    stdout;
    std::cout << log10(12345);
    std::cout <<"Iter: "<< iter <<" Recur:" << recur <<" Logarthmic: " << logVal;
    return iter;
}