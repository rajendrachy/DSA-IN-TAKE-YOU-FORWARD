#include<iostream>
using namespace std;
//TC: O(n)
class Node{
  public:
  int data;
  Node* left, *right;
   

  Node(int val){
    left = right = NULL;
    data = val;
  }
};

Node* BinaryTree() { // Node* -> return type
     int x;
     cin >> x;
     if(x == -1) {
        return NULL;
     }

     Node* temp = new Node(x);
     //Left side create
     cout << "Enter the left child" << x << ":";
     temp->left = BinaryTree();
     //Right side create
     cout << "Enter the right child" << x << ":";

     temp->right = BinaryTree();
     return temp;

};

int main () {
    cout << "Enter the root Node";
    Node* root;
    root = BinaryTree();

    return 0;
}



