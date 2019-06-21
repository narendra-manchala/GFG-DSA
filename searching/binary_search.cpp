#include <iostream>

int binarySearchRecursive(int a[], int beginIndex, int endIndex, int searchVal) {
    int midIndex = (beginIndex+endIndex)/2;
    std::cout<<beginIndex<<"-"<<endIndex<<"-->" << midIndex<< std::endl;

    if (beginIndex > endIndex) {
        return -1;
    }
    if (a[midIndex] == searchVal) {
        return midIndex;
    } else if(a[midIndex] < searchVal) {
        return binarySearchRecursive(a, midIndex + 1, endIndex, searchVal);
    } else {
        return binarySearchRecursive(a, beginIndex, midIndex - 1, searchVal);
    }
}

int binarySearchIterative(int arr[12], int ele){
    int firstIndex = 0;
    int lastIndex = 12 - 1;
    // std::cout<<firstIndex<<"-"<<lastIndex<<std::endl;

    while(firstIndex <= lastIndex){
        int midIndex = (firstIndex+lastIndex)/2;
        std::cout<<firstIndex<<"-"<<lastIndex<<"-->" << midIndex<<std::endl;

        if(arr[midIndex] == ele){
            // std::cout<< "Found index: " << midIndex<<std::endl;
            return midIndex;
        } else if(arr[midIndex] < ele) {
            firstIndex = midIndex + 1;
        } else {
            lastIndex = midIndex - 1;
        }
    }
    
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    std::cout << binarySearchRecursive(arr, 0, 11, 2) << std::endl;
    std::cout<< binarySearchIterative(arr, 2);
    return 0;
}