//-----------------postfix to prefix-----------------
// AB-DE+F*/
// operator + top2 + top1

#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

// Function to convert postfix to prefix
string postfixToPrefix(string postfix) {
    stack<string> s;
    
    // Read the postfix expression from left to right
    for (char c : postfix) {
        if (isalnum(c)) {  // If operand, push to stack
            s.push(string(1, c));
        } else {  // If operator, pop two operands and form prefix expression
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            string expr = c + op1 + op2;
            s.push(expr);
        }
    }
    return s.top(); // Final prefix expression
}

// Driver function
int main() {
    string postfix = "AB-DE+F*/";
    cout << "Postfix Expression: " << postfix << endl;
    cout << "Prefix Expression: " << postfixToPrefix(postfix) << endl;
    return 0;
}

