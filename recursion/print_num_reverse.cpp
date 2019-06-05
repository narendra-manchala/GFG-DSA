#include <iostream>

int printNto1(int n)
{
    if (n <= 0)
        return 0;
    std::cout << n;
    printNto1(n-1);
    return 0;
}

int print1toN(int n)
{
    if (n <= 0)
        return 0;
    print1toN(n-1);    
    std::cout << n;
    return 0;
}

int main(){
    print1toN(8);
    std::cout << "\n";
    printNto1(8);
}