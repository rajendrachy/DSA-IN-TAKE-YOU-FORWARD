
// Approach 1: Using Two Stacks (Dequeue is Costly)
// Logic
// Enqueue (enqueue()): Push element onto stack1.
// Dequeue (dequeue()):
// If stack2 is empty, move all elements from stack1 to stack2.
// Pop the top element from stack2 (which is the front of the queue).


#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> stack1, stack2; // Two stacks for queue implementation

public:
    // Function to enqueue (insert) an element into the queue
    void enqueue(int val) {
        stack1.push(val); // Always push into stack1
    }

    // Function to dequeue (remove) an element from the queue
    void dequeue() {
        if (stack1.empty() && stack2.empty()) { // Check for underflow
            cout << "Queue Underflow\n";
            return;
        }
        
        if (stack2.empty()) { // Move elements from stack1 to stack2 only if stack2 is empty
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        stack2.pop(); // Remove the top element from stack2 (front of queue)
    }

    // Function to get the front element without removing it
    int getFront() {
        if (stack1.empty() && stack2.empty()) return -1;

        if (stack2.empty()) { // Move elements if stack2 is empty
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        return stack2.top(); // Top of stack2 is the front element
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return stack1.empty() && stack2.empty();
    }

    // Function to get the current size of the queue
    int getSize() {
        return stack1.size() + stack2.size();
    }

    // Function to display queue elements from front to rear
    void display() {
        if (stack1.empty() && stack2.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        stack<int> temp1 = stack2; // Copy stack2 (front elements)
        stack<int> temp2;

        while (!stack1.empty()) { // Reverse stack1 into temp2
            temp2.push(stack1.top());
            stack1.pop();
        }

        while (!temp1.empty()) { // Print stack2 elements (front part)
            cout << temp1.top() << " ";
            temp1.pop();
        }

        while (!temp2.empty()) { // Print stack1 elements in original order
            cout << temp2.top() << " ";
            temp2.pop();
        }

        cout << endl;
    }
};

// Main function to demonstrate queue operations
int main() {
    Queue q; // Creating a queue

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display(); // Output: 10 20 30

    cout << "Size: " << q.getSize() << endl; // Output: 3
    cout << "Front element: " << q.getFront() << endl; // Output: 10

    q.dequeue();
    q.display(); // Output: 20 30

    return 0;
}
