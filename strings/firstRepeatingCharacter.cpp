#include <iostream>
#include <string.h>
// using namespace std;
using std::cout;
using std::endl;
 /**
  * @brief  Given a string find the first repeating character i.e. first index
  *         appears first.
  *         eg: geeksforgeeks - g (bcz 'g' is first index that repeats)
  * @note   
  * @param  str: string
  * @retval character or -1
  */
char firstRepeatingCharacter(char* str){
    int count[256] = {};
    for (int i = 0; i < 256; i++)
        count[i] = -1;
    int repIndx = __INT_MAX__;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(count[str[i]] == -1){
            count[str[i]] = i;
        }else if(count[str[i]] <= repIndx) {
            repIndx = count[str[i]];
        }
    }
    return str[repIndx];
}

int main(){
    char str[] = "abcddb";
    cout << "First char is: " << firstRepeatingCharacter(str);
    return 0;
}