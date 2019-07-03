#include <iostream>
#include <queue>

using namespace std;

class stackUsingQueue {
    private: 
        queue<int> q1,q2;

    public:
        void push(int x){
            q2.push(x);
            while(q1.size() > 0){
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1, q2);
        }

        int pop(){
            if (q1.size()) {
                int val = q1.front();
                cout << q1.front();
                q1.pop();
                return val;
            }
            cout << "Stack is empty";
            return 0;
        }

        void size(){
            cout << q1.size();
        }

};

class stackUsingQueue2 {
    queue<int> q1,q2;

    public:
        void push(int x){
            q1.push(x);
        }

        int pop(){
            while(q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }
            int val = q1.front();
            q1.pop();
            swap(q1, q2);
            cout << val;
            return val;
        }

        int size(){
            cout << q1.size();
            return q1.size();
        }

        int top(){
            cout << q1.back();
            return q1.back();
        }
};

int main(){
    stackUsingQueue2 s;
    s.push(1);
    s.size();
    s.push(2);
    s.size();
    s.top();
    s.pop();
    s.top();
}