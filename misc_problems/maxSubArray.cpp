#include <iostream>
#include <vector>

using namespace std;
// using  std::chrono;

int maxSubArray(vector<int> str, int len){
    int maxSum = 0;
    for (int i = 0; i < str.size() - len + 1; i++){
        int currSum = 0;
        for (int j = 0; j < len; j++){
            currSum += str[i+j];
        }
        if (currSum > maxSum){
            maxSum = currSum;
        }
    }
    return maxSum;
}

int maxSubArrayWindowSliding(vector<int> str, int len){
    int currSum = 0;
    for (int i = 0; i < len; i++ ){
        currSum += str[i];
    }
    int maxSum = currSum;
    for (int i = len; i < str.size() - len + 1; i++){
        currSum = currSum - str[i - len];
        currSum = currSum + str[i];
        if (currSum > maxSum)
            maxSum = currSum;
    }
    return maxSum;
}

int main(){
    vector<int> arr = {8,1,7,18,2,3,4,5};
    cout << maxSubArray(arr, 3) << endl;
    cout << maxSubArrayWindowSliding(arr, 3)<< endl;
    return 0;
}