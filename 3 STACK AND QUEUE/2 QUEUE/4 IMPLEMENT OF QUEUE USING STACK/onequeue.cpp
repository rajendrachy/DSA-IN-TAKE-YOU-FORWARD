// Approach 2: Using a Single Stack (Recursive Dequeue)
// Logic
// Enqueue (enqueue()): Push element onto the stack (Normal push).
// Dequeue (dequeue()):
// If the stack has only one element, remove it (base case).
// Otherwise, recursively pop elements until we reach the first inserted element, then push elements back.




#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s; // Using a single stack

public:
    // Function to enqueue (insert) an element into the queue
    void enqueue(int val) {
        s.push(val); // Push element onto the stack
    }

    // Function to dequeue (remove) an element from the queue using recursion
    void dequeue() {
        if (s.empty()) { // Check for underflow
            cout << "Queue Underflow\n";
            return;
        }

        int topElement = s.top();
        s.pop();

        if (s.empty()) {
            // Base case: last remaining element is removed (front of the queue)
            return;
        }

        dequeue(); // Recursive call to remove the first inserted element
        s.push(topElement); // Push elements back in order
    }

    // Function to get the front element without removing it
    int getFront() {
        if (s.empty()) return -1;

        int topElement = s.top();
        s.pop();

        if (s.empty()) {
            // Base case: last remaining element is the front of the queue
            s.push(topElement); // Push it back before returning
            return topElement;
        }

        int frontElement = getFront(); // Recursive call
        s.push(topElement); // Push elements back in order
        return frontElement;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return s.empty();
    }

    // Function to get the current size of the queue
    int getSize() {
        return s.size();
    }

    // Function to display queue elements
    void display() {
        if (s.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        stack<int> temp;
        while (!s.empty()) {
            temp.push(s.top());
            s.pop();
        }

        while (!temp.empty()) {
            cout << temp.top() << " ";
            s.push(temp.top());
            temp.pop();
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

    cout << "Front element: " << q.getFront() << endl; // Output: 10

    q.dequeue();
    q.display(); // Output: 20 30

    cout << "Size: " << q.getSize() << endl; // Output: 2

    return 0;
}






