#include <iostream>
#include <stack>

using namespace std;

bool balancedParanthesis(string str){
    stack<int> s;
    string openPar = "{[(";
    string closedPar = "}])";
    if (str.length() % 2 != 0) return false;
    for(int i = 0; i<str.length(); i++){
        if (openPar.find(str[i]) < 3){
            s.push(str[i]);
        } else {
            if (openPar.find(s.top()) == closedPar.find(str[i])){
                s.pop();
            } else {
            return false;
            }
        }
    }
    if (s.size() == 0){
        return true;
    } else {
        return false;
    }
}


int main(){
    string p;
    cout << "enter paranthesis: ";
    cin >> p;
    cout << endl;
    cout << balancedParanthesis(p);
    return 0;
}