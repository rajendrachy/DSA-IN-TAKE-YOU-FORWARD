//------------------prefix to postfix--------------------

// AB-DE+F*/ 
// top1 + top2 + operator




#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

// Function to convert prefix to postfix
string prefixToPostfix(string prefix) {
    stack<string> s;
    int n = prefix.length();
    
    // Read from right to left
    for (int i = n - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isalnum(c)) { // If operand, push to stack
            s.push(string(1, c));
        } else { // If operator, pop two operands and form postfix expression
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string expr = op1 + op2 + c;
            s.push(expr);
        }
    }
    return s.top(); // Final postfix expression
}

// Driver function
int main() {
    string prefix = "/-AB*F+DE";
    cout << "Prefix Expression: " << prefix << endl;
    cout << "Postfix Expression: " << prefixToPostfix(prefix) << endl;
    return 0;
}


