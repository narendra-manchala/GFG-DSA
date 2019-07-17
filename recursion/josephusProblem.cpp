#include <iostream>

using namespace std;

int josephusProblem(int n, int k){
    if (n == 1){
        return n;
    }
    return (josephusProblem(n-1,k)+k-1)%n + 1;
}

int main(){
    int n, k;
    cout << "Enter no of people: ";
    cin >> n;
    cout << endl;
    cout << "Enter position to kill: ";
    cin >> k;
    cout << endl;
    cout << josephusProblem(n, k) << endl;
}