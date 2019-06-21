#include <iostream>
using namespace std;

int first(int n) 
{
    if (n == 0) {
        return 0;
    }
    if (n&1) {
        cout << 1;
        return 1;
    }
    else if( !(n&n-1)) {
        int pow = 1;
        while(n >>= 1) {
            pow++;
        }
        cout << pow;
        return pow;
    }
    else {
        int pow = 1;
        int m = n;
        while(m >>= 1) {
            pow++;
        }
        int val = 1<<(pow-1);
        // cout << pow <<"\n" <<val <<"\n" <<n <<"\n";

        // cout << first(n-(1<<val));
        return first(n-val);
    }
}

int main(){
    first(18);
}
