#include <iostream>
#include <string>
#include <utility>

// using std::cout;
// using std::string;
// using std::cin;
// using std::pair;
using namespace std;

char firstNonRepeatingCharacter(string str){
    int strLength = str.length();
    int nonRepIndex = -1;
    int count[256];
    for (int i = 0; i<256; i++)
        count[i] = -1;
    for (int i = strLength - 1; i >= 0; i--){
        if(count[str[i]] == -1){
            count[str[i]] = i;
            nonRepIndex = i;
        }
    }

    return str[nonRepIndex];
}

char firstNRC2(string str){
    pair<int, int> count[256];
    for(int i = 0; i < str.length(); i++){
        count[str[i]].first ++;
        count[str[i]].second = i;
        // cout << count[str[i]].first << ", " << count[str[i]].second << endl;
    }
    int index = __INT_MAX__;
    for (int i = 0; i < 256; i++){
        if(count[i].first == 1 & count[i].second < index){
            index = count[i].second;
        }
    }
    return str[index];
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << firstNonRepeatingCharacter(str) << endl;
    cout << firstNRC2(str)<< endl;
    return 0;
}