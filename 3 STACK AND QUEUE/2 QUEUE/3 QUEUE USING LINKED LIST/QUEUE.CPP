#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Class to implement Queue using a linked list
class Queue {
    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue
    int size;    // Variable to store the current size of the queue

public:
    // Constructor to initialize an empty queue
    Queue() {
        front = rear = nullptr;
        size = 0;
    }

    // Function to enqueue (insert) an element into the queue
    void enqueue(int val) {
        Node* newNode = new Node(); // Create a new node
        newNode->data = val;
        newNode->next = nullptr;

        if (rear == nullptr) { // If the queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode; // Link the new node at the end
            rear = newNode; // Update the rear pointer
        }
        size++; // Increase queue size
    }

    // Function to dequeue (remove) an element from the queue
    void dequeue() {
        if (front == nullptr) { // Check for queue underflow
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        front = front->next; // Move front pointer to the next node

        if (front == nullptr) // If queue becomes empty, update rear to nullptr
            rear = nullptr;

        delete temp; // Delete the removed node
        size--; // Decrease queue size
    }

    // Function to get the front element without removing it
    int getFront() {
        return (front == nullptr) ? -1 : front->data;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to get the current size of the queue
    int getSize() {
        return size;
    }

    // Function to display queue elements from front to rear
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Queue() {
        while (front) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
        size = 0;
    }
};

// Main function to demonstrate queue operations
int main() {
    Queue q; // Creating a queue

    // Enqueuing elements into the queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Display queue elements
    q.display(); // Output: 10 20 30

    // Display current queue size
    cout << "Size: " << q.getSize() << endl; // Output: 3

    // Get front element
    cout << "Front element: " << q.getFront() << endl; // Output: 10

    // Dequeue an element from the queue
    q.dequeue();
    q.display(); // Output: 20 30
    cout << "Size: " << q.getSize() << endl; // Output: 2

    // Check if queue is empty
    cout << "Is Empty: " << (q.isEmpty() ? "Yes" : "No") << endl; // Output: No

    return 0;
}
