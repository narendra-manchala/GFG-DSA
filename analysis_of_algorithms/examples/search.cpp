#include <iostream>

bool search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++){
        if(arr[i] == x){
            printf("Element found");
            return true;
        }
    }
    printf("Element not found");
    return false;
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int x = 7;
    search(arr, n, x);
}