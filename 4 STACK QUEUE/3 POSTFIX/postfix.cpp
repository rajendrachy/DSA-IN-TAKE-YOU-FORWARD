//---------------Infix to postfix---------------------

// eg. a+b*(c^d-e)

// operator always put it into the stack
// I=0                         Stack          Ans     
// a                                          a 
// +                           +              a
// b                           +              ab 
// *                           +*             ab  
// (                           +*(            ab 
// c                           +*(            abc  
// ^                           +*(^           abc
// d                           +*(^           abcd
// -(lesser proprity)          +*(-           abcd^
// e                           +*(-           abcd^e
// )                                          abcd^e-*+ (postfix) -> ans



// ---------infix to prefix--------------------

//-----code-----
// infixToPrefix(string s) {
//     i=0, stack st, ans="";

//     while(i < n) {
//         if(s[i] >="A" && s[i] <='Z'
//              || s[i] >="a" && s[i] <='z' 
//              || s[i] >='0' && s[i] <='9') {
//                 ans = ans + s[i];
//              }
//              else if(s[i] == '(') {
//                st.push(s[i]) ;
//              } 
//              else if(s[i] == ')') {
//                 while(st.empty() && st.top() != '(') {
//                     ans += st.top();
//                     st.pop();

//                 }
//                 st.pop();
//              }
//              else {
//                 while(st.empty() && priority(s[i] <= proprity(s.top()))) {
//                     ans += st.top();
//                     st.pop();
//                 }
//              }

//              st.push(s[i]);
//              i++;
//     }
//     while(!st.empty() ){
//       ans = ans + st.top();
//       st.pop();
//     }


//     return ans;
// }
// TC -> O(n)






//---------------Code----------------------
#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0; // Default case for parentheses
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {  // If operand, add to output
            postfix += c;
        } else if (c == '(') {  // Push '(' to stack
            s.push(c);
        } else if (c == ')') {  // Pop until '(' is found
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Remove '('
        } else { // Operator case
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop any remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Driver function
int main() {
    string infix = "(A-B)/((D+E)*F)";
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;
    return 0;
}



