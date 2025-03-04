//--------------Postfix to Infix-------------------------

// AB-DE+F*/

// take only i and stack st
// When operator comes then take last two operand and add that operaor between them and close with bracket i.e ()

// i             stack
// A              A 
// B              AB 
// -              (A-B)       
// D              (A-B), D 
// E               (A-B),D,E 
// +              (A-B), (D-E) 
// F              (A-B), (D-E), F 
// *              (A-B),((D-E)*F)
// /              ((A-B) / ((D-E)*F))





//-------------code---------------------------

#include <iostream>
#include <stack>
#include <cctype>
//TC-> O(N)+)(N)
using namespace std;

// Function to convert postfix to infix
string postfixToInfix(string postfix) {
    stack<string> s;
    for (char c : postfix) {
        if (isalnum(c)) {  // If operand, push to stack
            s.push(string(1, c));
        } else {  // If operator, pop two operands and form infix expression
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            string expr = "(" + op1 + " " + c + " " + op2 + ")";
            s.push(expr);
        }
    }
    return s.top(); // Final infix expression
}

// Driver function
int main() {
    string postfix = "AB-DE+F*/";
    cout << "Postfix Expression: " << postfix << endl;
    cout << "Infix Expression: " << postfixToInfix(postfix) << endl;
    return 0;
}

