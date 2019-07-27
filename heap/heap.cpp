#include <iostream>
#include <vector>

using namespace std;

struct Heap{
    vector<int> arr;
    int size, capacity;
    Heap(){
        size = 0;
        capacity = 0;
    }
};
