#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Class to implement Stack using a linked list
class Stack {
    Node* top; // Pointer to the top node

public:
    // Constructor to initialize an empty stack
    Stack() {
        top = nullptr; // Stack is initially empty
    }

    // Function to push an element onto the stack
    void push(int val) {
        Node* newNode = new Node(); // Create a new node
        newNode->data = val; // Assign value
        newNode->next = top; // Link new node to the current top
        top = newNode; // Update top pointer
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == nullptr) { // Check for stack underflow
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top; // Store the top node
        top = top->next; // Move top pointer to the next node
        delete temp; // Delete the popped node
    }

    // Function to get the top element without removing it
    int peek() {
        return (top == nullptr) ? -1 : top->data;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Function to display stack elements from top to bottom
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        while (top) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
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

    // Get top element
    cout << "Top element: " << s.peek() << endl; // Output: 30

    // Pop an element from the stack
    s.pop();
    s.display(); // Output: 20 10

    // Check if stack is empty
    cout << "Is Empty: " << (s.isEmpty() ? "Yes" : "No") << endl; // Output: No

    return 0;
}
