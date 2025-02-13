// 📌 Understanding Circular Queue
// A circular queue is a linear data structure that follows the FIFO (First In, First Out) principle but connects the last position back to the first, forming a circle.
// ✅ Advantages of Circular Queue:

// Efficient Memory Utilization (Prevents unused space in a regular queue).
// Faster Processing (Eliminates shifting of elements).
// 🎯 Operations in Circular Queue
// Insert (Enqueue): Adds an element at the rear.
// Delete (Dequeue): Removes an element from the front.
// Search: Finds if an element exists in the queue.
// Display: Shows all elements in the queue.
// 🔹 C++ Code for Circular Queue with Detailed Comments
// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// // Define Maximum Size of Circular Queue
// #define SIZE 5  

// // Circular Queue Class
// class CircularQueue {
// private:
//     int queue[SIZE]; // Array for queue storage
//     int front, rear; // Front and Rear pointers

// public:
//     // Constructor - Initializes front & rear to -1 (Empty Queue)
//     CircularQueue() {
//         front = rear = -1;
//     }

//     // 🔵 Function to Check if the Queue is Full
//     bool isFull() {
//         return ((rear + 1) % SIZE == front);
//     }

//     // 🔵 Function to Check if the Queue is Empty
//     bool isEmpty() {
//         return (front == -1);
//     }

//     // 🔵 Function to Insert an Element (Enqueue)
//     void enqueue(int value) {
//         if (isFull()) {
//             cout << "❌ Queue is FULL! Cannot insert " << value << endl;
//             return;
//         }

//         // If queue is empty, update front to first position
//         if (isEmpty()) {
//             front = rear = 0;
//         } else {
//             // Circular increment of rear
//             rear = (rear + 1) % SIZE;
//         }

//         queue[rear] = value; // Insert element
//         cout << "✅ Inserted: " << value << endl;
//     }

//     // 🔵 Function to Delete an Element (Dequeue)
//     void dequeue() {
//         if (isEmpty()) {
//             cout << "❌ Queue is EMPTY! Cannot delete.\n";
//             return;
//         }

//         cout << "✅ Deleted: " << queue[front] << endl;

//         // If only one element was present, reset queue
//         if (front == rear) {
//             front = rear = -1;
//         } else {
//             // Circular increment of front
//             front = (front + 1) % SIZE;
//         }
//     }

//     // 🔵 Function to Search for an Element
//     void search(int value) {
//         if (isEmpty()) {
//             cout << "❌ Queue is EMPTY! Cannot search.\n";
//             return;
//         }

//         int index = front;
//         while (true) {
//             if (queue[index] == value) {
//                 cout << "🔍 Found " << value << " at position " << index << endl;
//                 return;
//             }
//             if (index == rear) break;
//             index = (index + 1) % SIZE; // Circular traversal
//         }
//         cout << "❌ " << value << " NOT FOUND in the queue.\n";
//     }

//     // 🔵 Function to Display the Queue Elements
//     void display() {
//         if (isEmpty()) {
//             cout << "❌ Queue is EMPTY!\n";
//             return;
//         }

//         cout << "🔷 Queue Elements: ";
//         int index = front;
//         while (true) {
//             cout << queue[index] << " ";
//             if (index == rear) break;
//             index = (index + 1) % SIZE; // Circular traversal
//         }
//         cout << endl;
//     }
// };

// // 🔹 Main Function - User Menu
// int main() {
//     CircularQueue cq;
//     int choice, value;

//     while (true) {
//         cout << "\n🔹 MENU 🔹\n";
//         cout << "1️⃣ Insert (Enqueue)\n";
//         cout << "2️⃣ Delete (Dequeue)\n";
//         cout << "3️⃣ Search\n";
//         cout << "4️⃣ Display Queue\n";
//         cout << "5️⃣ Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value to insert: ";
//                 cin >> value;
//                 cq.enqueue(value);
//                 break;
//             case 2:
//                 cq.dequeue();
//                 break;
//             case 3:
//                 cout << "Enter value to search: ";
//                 cin >> value;
//                 cq.search(value);
//                 break;
//             case 4:
//                 cq.display();
//                 break;
//             case 5:
//                 cout << "🚀 Exiting Program. Thank You!\n";
//                 return 0;
//             default:
//                 cout << "❌ Invalid Choice! Try again.\n";
//         }
//     }
// }
// 🔹 Code Explanation
// 📌 Step 1: Class Definition
// We define a class CircularQueue that contains:
// An array queue[SIZE] to store elements.
// Two integer pointers front and rear to track elements.
// Methods for insertion, deletion, searching, and displaying elements.
// 📌 Step 2: Circular Queue Operations
// ✅ Checking if Queue is Full (isFull())
// The queue is full when the next position of rear (rear + 1) % SIZE equals front.
// ✅ Checking if Queue is Empty (isEmpty())
// The queue is empty when front == -1.
// ✅ Inserting an Element (enqueue())
// If the queue is full, insertion is not allowed.
// If the queue is empty, set front = rear = 0.
// Otherwise, move rear circularly using (rear + 1) % SIZE.
// Insert the new element at queue[rear].
// ✅ Deleting an Element (dequeue())
// If the queue is empty, deletion is not allowed.
// Print the element at front.
// If front == rear, reset the queue (front = rear = -1).
// Otherwise, move front circularly using (front + 1) % SIZE.
// ✅ Searching for an Element (search())
// If the queue is empty, return.
// Traverse from front to rear circularly.
// If the element is found, print its position.
// ✅ Displaying the Queue (display())
// If the queue is empty, return.
// Traverse from front to rear circularly and print elements.
// 🔹 Sample Output
// yaml
// Copy
// Edit
// 🔹 MENU 🔹
// 1️⃣ Insert (Enqueue)
// 2️⃣ Delete (Dequeue)
// 3️⃣ Search
// 4️⃣ Display Queue
// 5️⃣ Exit
// Enter your choice: 1
// Enter value to insert: 10
// ✅ Inserted: 10

// Enter your choice: 1
// Enter value to insert: 20
// ✅ Inserted: 20

// Enter your choice: 4
// 🔷 Queue Elements: 10 20 

// Enter your choice: 3
// Enter value to search: 10
// 🔍 Found 10 at position 0

// Enter your choice: 2
// ✅ Deleted: 10

// Enter your choice: 4
// 🔷 Queue Elements: 20 

// Enter your choice: 5
// 🚀 Exiting Program. Thank You!
// 🔹 Conclusion
// ✅ Efficient Implementation of Circular Queue.
// ✅ Fully Functional Operations: Insert, Delete, Search, Display.
// ✅ Optimized Space Complexity with Circular Indexing.

// 🚀 Now you have a beautifully structured Circular Queue program! Happy Coding! 🎯


