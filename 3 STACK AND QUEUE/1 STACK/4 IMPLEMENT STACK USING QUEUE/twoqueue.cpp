#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2; // Using two queues

public:
    // Function to push an element onto the stack
    void push(int val) {
        q1.push(val);
    }

    // Function to pop the top element from the stack
    void pop() {
        if (q1.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        // Move elements from q1 to q2 except the last one
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // Remove the last element (top of stack)
        q1.pop();

        // Swap q1 and q2
        swap(q1, q2);
    }

    // Function to get the top element without removing it
    int top() {
        if (q1.empty()) return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front(); // Get top element
        q2.push(q1.front()); // Move it to q2
        q1.pop();

        swap(q1, q2);
        return topElement;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return q1.empty();
    }

    // Function to get the current size of the stack
    int getSize() {
        return q1.size();
    }

    // Function to display stack elements
    void display() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        queue<int> temp = q1; // Copy the queue
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

// Main function to demonstrate stack operations
int main() {
    Stack s; // Creating a stack

    // Pushing elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display stack elements
    s.display(); // Output: 10 20 30

    // Display current stack size
    cout << "Size: " << s.getSize() << endl; // Output: 3

    // Get top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // Pop an element from the stack
    s.pop();
    s.display(); // Output: 10 20
    cout << "Size: " << s.getSize() << endl; // Output: 2

    // Check if stack is empty
    cout << "Is Empty: " << (s.isEmpty() ? "Yes" : "No") << endl; // Output: No

    return 0;
}
