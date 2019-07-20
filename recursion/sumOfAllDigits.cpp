#include <iostream>

using namespace std;

int sumOfAllDigits(int n){
    if (n < 10){
        return n;
    }
    return sumOfAllDigits(n/10) + n%10;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n; 
    cout << "\n" << sumOfAllDigits(n) << std::endl;
}