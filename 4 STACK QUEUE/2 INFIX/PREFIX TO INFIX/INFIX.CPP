//-------------PREFIX TO INFIX-----------------------
// *+PQ-MN
// start from end last i.e i = size-1
// i.e N




#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

// Function to convert prefix to infix
string prefixToInfix(string prefix) {
    stack<string> s;
    int n = prefix.length();
    
    // Read from right to left
    for (int i = n - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isalnum(c)) { // If operand, push to stack
            s.push(string(1, c));
        } else { // If operator, pop two operands and form infix expression
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string expr = "(" + op1 + " " + c + " " + op2 + ")";
            s.push(expr);
        }
    }
    return s.top(); // Final infix expression
}

// Driver function
int main() {
    string prefix = "/-AB*+DEF";
    cout << "Prefix Expression: " << prefix << endl;
    cout << "Infix Expression: " << prefixToInfix(prefix) << endl;
    return 0;
}
