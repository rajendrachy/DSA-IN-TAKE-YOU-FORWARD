#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q; // Using a single queue

public:
    // Function to push an element onto the stack
    void push(int val) {
        int n = q.size(); // Get current size of queue
        q.push(val); // Insert the new element

        // Rotate the queue to move the new element to the front
        for (int i = 0; i < n; i++) {
            q.push(q.front()); // Move front element to the back
            q.pop(); // Remove the front element
        }
    }

    // Function to pop the top element from the stack
    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        q.pop(); // Remove the front element
    }

    // Function to get the top element without removing it
    int top() {
        return q.empty() ? -1 : q.front();
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return q.empty();
    }

    // Function to get the current size of the stack
    int getSize() {
        return q.size();
    }

    // Function to display stack elements
    void display() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        queue<int> temp = q; // Copy the queue
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
    s.display(); // Output: 30 20 10

    // Display current stack size
    cout << "Size: " << s.getSize() << endl; // Output: 3

    // Get top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // Pop an element from the stack
    s.pop();
    s.display(); // Output: 20 10
    cout << "Size: " << s.getSize() << endl; // Output: 2

    // Check if stack is empty
    cout << "Is Empty: " << (s.isEmpty() ? "Yes" : "No") << endl; // Output: No

    return 0;
}
