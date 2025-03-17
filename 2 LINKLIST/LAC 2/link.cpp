// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;


// class Node {
//      public:
//      int data; // data
//      Node* next; // Store pointer to the next node

//      public:
//      Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//      }
// };

// int main() {
//     vector<int> arr = {2, 5, 8, 7};
//     Node* y = new Node(arr[0], nullptr); // new Keyworg give directly to the pointer to the memory location and we can store it in the variable -> y 
//     cout << y->data; // 2
//     return 0;
// }




// --------------Convert Array to the Linked List------------------------------
// int arr[] = [2,1,3,8];
// 

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]); // Creating a new node
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}



// Searching in the array -> Leetcode, GeeksforGeeks
