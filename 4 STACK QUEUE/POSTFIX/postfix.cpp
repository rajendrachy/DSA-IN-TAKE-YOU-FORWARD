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

