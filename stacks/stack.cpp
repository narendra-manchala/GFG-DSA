#include <iostream>
// #include <cstdlib>
using namespace std;

#define SIZE = 10

class stack{
    private:
        int *arr;
        int top;
        int capacity;
    public:
        stack(int size);// constuctor
        void push(int);
        int pop();
        int peek();
        int size();
        bool isEmpty();
        bool isFull();
};

stack::stack(int size){
    arr = new int[size];
    capacity = size;
    top = -1;
}

void stack::push(int ele){
    if (isFull()) {
        cout << "Overflow \n Stack is full. \n";
        exit(EXIT_FAILURE);
    }
    arr[++top] = ele;
}

int stack::pop(){
    if (isEmpty()) {
        cout << "Underfolow \n Stack is empty";
        exit(EXIT_FAILURE);
    }
    return arr[top--];
}

int stack::peek(){
    if (!isEmpty()){
        return arr[top];
    }
    exit(EXIT_FAILURE);
}

int stack::size(){
    return top + 1;
}

bool stack::isEmpty(){
    return top == -1;
}

bool stack::isFull() {
    return capacity - 1 == top;
}

int main(){
    stack s(3);
    s.push(2);
    cout << s.size();
    cout << s.isEmpty();
    cout << s.isFull();
    cout << s.peek();
    cout << s.pop();
    cout << s.isEmpty();
    cout << s.size();
    return 0;
}