//урок 1 задание 3

#include <iostream>

using namespace std;

class Stack {
    #define STACK_LENGHT 10
    int arr[STACK_LENGHT] = {};
    int volume = 0;
public:
    Stack() {
        for (size_t i = 0; i < STACK_LENGHT; i++)
        arr[i] = 0;
    }
    void reset()
    {
        while (volume > 0)
        arr[volume--] = 0;
    }
    void print() {
        cout << "( ";
        for (size_t i = 0; i < volume; i++) {
            cout << arr[i] << " ";
        }
        cout << ")\n";
    }
    bool push(int a) {
        if (volume < STACK_LENGHT) {
            arr[volume++] = a;
            return true;
        } else {
            return false;
        }
    }
    int pop() {
        if (volume >= 0) {
            return arr[volume--];
        }
            else {
            cout << "Error" << endl;
            return -1;
            }
    }
    
};

int main()
{
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
