#include <bits/stdc++.h>
using namespace std;

void patternSearch(char* str, char* pattern){
    int n = strlen(str);
    int m = strlen(pattern);
    for (int i=0; i<=n-m; i++){
        int j;
        for(j=0; j<m; j++){
            if(str[i+j] != pattern[j])
                break;
        }
        if(j == m)
            cout << "Pattern mathces at index: " << i << endl;
    }
}

int main(){
    char str[] = "abcab";
    char pat[] = "ab";
    patternSearch(str, pat);
    return 0;
}
