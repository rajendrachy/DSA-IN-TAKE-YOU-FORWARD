//------------pre-order, in-order and post-order--------------------------
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



//-----------pre-Order---------------
void PreOrder(Node* root) {
   if(root == NULL) {
    return;
   }

   //Node
   cout << root->data<< " ";

   //left
   PreOrder(root->left);
   //right
   PreOrder(root->right);
}


//-------------InOrder-----------------
void InOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    //left
    InOrder(root->left);
    //Node
    cout << root->data<< " ";
    //right
    InOrder(root->right);
}



//---------------postOrder--------------------
void PostOrder(Node* root) {
    if(root == NULL ) {
        return;
    }

    //left
    PostOrder(root->left);
    //right
    PostOrder(root->right);
    //Node
    cout << root->data << " ";

}


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
    //Tree Creation Code
    cout << "Enter the root Node";
    Node* root;
    root = BinaryTree();


    //PreOdert Print
    cout << "PreOrder: ";
    PreOrder(root);

    //Inorder Print
    cout << "\nInorder: ";
    InOrder(root);

    //PostOrder Print
    cout <<"\nPostOrder: ";
    PostOrder(root);
    
    return 0;
}




