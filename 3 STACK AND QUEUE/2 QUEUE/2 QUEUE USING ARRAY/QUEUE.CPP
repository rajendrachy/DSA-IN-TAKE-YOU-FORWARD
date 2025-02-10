#include <iostream>
using namespace std;

// Class to implement Queue using an array
class Queue {
    int front, rear, size;
    int* arr;

public:
    // Constructor to initialize queue
    Queue(int s) {
        size = s;
        arr = new int[size]; // Dynamically allocating memory
        front = rear = -1; // Queue is initially empty
    }

    // Function to enqueue (insert) an element into the queue
    void enqueue(int val) {
        if (rear == size - 1) { // Check for queue overflow
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0; // If inserting the first element, set front to 0
        arr[++rear] = val; // Increment rear and insert element
    }

    // Function to dequeue (remove) an element from the queue
    void dequeue() {
        if (front == -1 || front > rear) { // Check for queue underflow
            cout << "Queue Underflow\n";
            return;
        }
        front++; // Increment front to remove the front element
    }

    // Function to get the front element without removing it
    int getFront() {
        return (front == -1 || front > rear) ? -1 : arr[front];
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Function to get the current size of the queue
    int getSize() {
        return isEmpty() ? 0 : (rear - front + 1);
    }

    // Function to display queue elements from front to rear
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++) // Traverse from front to rear
            cout << arr[i] << " ";
        cout << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Queue() {
        delete[] arr;
    }
};

// Main function to demonstrate queue operations
int main() {
    Queue q(5); // Creating a queue of size 5

    // Enqueuing elements into the queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Display queue elements
    q.display(); // Output: 10 20 30

    // Display current queue size
    cout << "Size: " << q.getSize() << endl; // Output: 3

    // Dequeue an element from the queue
    q.dequeue();
    q.display(); // Output: 20 30
    cout << "Size: " << q.getSize() << endl; // Output: 2

    // Get the front element
    cout << "Front element: " << q.getFront() << endl; // Output: 20

    return 0;
}
