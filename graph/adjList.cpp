#include <iostream>
#include <vector>

using namespace std;

int main(){
    int v = 4;
    vector<int> adjl[v];
    adjl[0].push_back(1);
    adjl[1].push_back(0);
    adjl[0].push_back(2);
    adjl[2].push_back(0);
}