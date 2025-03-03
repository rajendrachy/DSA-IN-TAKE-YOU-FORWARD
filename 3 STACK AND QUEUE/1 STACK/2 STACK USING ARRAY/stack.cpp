#include <iostream>
using namespace std;

// ------------Class to implement Stack using an array-------------

class Stack {
    int top, size; // 'top' keeps track of the top element index, 'size' is the stack capacity
    int* arr; // Dynamic array to store stack elements

public:
    // Constructor to initialize stack with given size
    Stack(int s) {
        size = s;
        arr = new int[size]; // Dynamically allocating memory for the stack
        top = -1; // Stack is initially empty
    }
    


    // Function to push an element onto the stack
    void push(int val) {
        if (top == size - 1) { // Check for stack overflow
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val; // Increment top and add element
    }

   

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) { // Check for stack underflow
            cout << "Stack Underflow\n";
            return;
        }
        top--; // Decrement top to remove the top element
    }

    
    // Function to get the top element of the stack without removing it
    int peek() {
        return (top == -1) ? -1 : arr[top]; // Return -1 if stack is empty
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }


    // Function to get the current size (number of elements in stack)
    int getSize() {
        return top + 1; // Stack size is (top index + 1)
    }

    // Function to display stack elements from top to bottom
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) // Traverse from top to bottom
            cout << arr[i] << " ";
        cout << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }
};

// Main function to demonstrate stack operations
int main() {
    Stack s(5); // Creating a stack of size 5

    // Pushing elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display stack elements
    s.display(); // Output: 30 20 10

    // Display current stack size
    cout << "Size: " << s.getSize() << endl; // Output: 3

    // Pop an element from the stack
    s.pop();
    s.display(); // Output: 20 10
    cout << "Size: " << s.getSize() << endl; // Output: 2

    // Get the top element
    cout << "Top element: " << s.peek() << endl; // Output: 20

    return 0;
}
