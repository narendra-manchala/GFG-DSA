#include <iostream>

using namespace std;

void printSubset(string str, string curr="", int index=0){
    if (index == str.length()){
        cout << curr << ", ";
        return;
    }
    printSubset(str, curr, index+1);
    printSubset(str, curr+str[index], index+1);
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    printSubset(str);
    cout<<endl;
}