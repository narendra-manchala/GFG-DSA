#include <iostream>
#include <string.h>

using namespace std;

/**
 * @brief  Given two strings, check they are anagrams of each other.
 * @note   Anagram - all the characters appears with same frequency.
 * @param  str1: string
 * @param  str2: string
 * @retval bool
 */
bool checkAnagram(char* str1, char* str2){
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    if(str1Len != str2Len)
        return false;
    int count[256] = {};
    for(int i =0; i<str1Len; i++){
        // cout << 0+str1[i];
        count[str1[i]] += 1;
    }
    for(int i = 0; i < str2Len; i++){
        count[str2[i]] -= 1;
    }
    for(int i=0; i<256; i++) {
        if(count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main(){
    char str1[] = "abc";
    char str2[] = "dbca";
    cout << "Is Anagram: " << checkAnagram(str1, str2);
    return 0;
}