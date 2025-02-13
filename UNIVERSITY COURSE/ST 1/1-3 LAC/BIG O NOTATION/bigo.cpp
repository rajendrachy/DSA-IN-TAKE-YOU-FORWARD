// # **Big O Notation and Analysis in C++**

// ## **1. Introduction**
// Big O Notation is a mathematical notation used to describe the efficiency (**प्रभावशीलता**) of an algorithm in terms of time and space complexity. It provides an upper bound on the running time and helps in comparing different algorithms.

// ## **2. Why Big O Notation?**
// - Helps in analyzing the performance (**प्रदर्शन**) of algorithms.
// - Predicts scalability (**विस्तारक्षमता**) as input size increases.
// - Assists in choosing the best algorithm for a given problem.

// ## **3. Common Big O Notations**

// | Notation | Complexity Type (**प्रकार**) | Example |
// |----------|-----------------|---------|
// | **O(1)** | Constant Time (**स्थिर समय**) | Accessing an array element |
// | **O(log n)** | Logarithmic Time (**लघुगणकीय समय**) | Binary Search |
// | **O(n)** | Linear Time (**रैखिक समय**) | Linear Search |
// | **O(n log n)** | Linearithmic Time (**रैखिक-लघुगणकीय समय**) | Merge Sort |
// | **O(n²)** | Quadratic Time (**घातांकीय समय**) | Bubble Sort |
// | **O(2ⁿ)** | Exponential Time (**घातीय समय**) | Recursive Fibonacci |
// | **O(n!)** | Factorial Time (**गुणोत्तर समय**) | Traveling Salesman Problem |



// ## **4. Time Complexity Analysis**
// ### **A. Best, Worst, and Average Cases**
// - **Best Case (सर्वश्रेष्ठ स्थिति):** Minimum time required for execution.
// - **Worst Case (सबसे खराब स्थिति):** Maximum time required.
// - **Average Case (औसत स्थिति):** Expected time under typical conditions.

// ### **B. How to Calculate Time Complexity?**
// 1. Count loops (**लूप गिनें**) (single loop → O(n), nested loop → O(n²)).
// 2. Consider recursion (**रिकर्शन को ध्यान में रखें**) (use recurrence relations).
// 3. Ignore constants and lower-order terms.

// ## **5. Example in C++**
// ```cpp
// #include <iostream>
// using namespace std;

// void exampleFunction(int n) {
//     for (int i = 0; i < n; i++) {  // O(n)
//         cout << i << " ";
//     }
// }

// int main() {
//     exampleFunction(5);
//     return 0;
// }
// ```
// **Time Complexity:** O(n)

// ## **6. Space Complexity Analysis**
// - Space complexity (**स्थान जटिलता**) refers to the amount of memory (**स्मृति**) an algorithm uses.
// - Example: **O(1) (Constant space)**, **O(n) (Linear space)** for recursive functions.

// ## **7. Conclusion**
// Understanding Big O Notation is crucial for writing efficient (**कुशल**) programs in C++. It helps in optimizing algorithms and improving performance.

// ---

// # **MCQs on Big O Notation**

// **1. What does O(1) represent?**
//    a) Constant time complexity ✅  
//    b) Linear time complexity  
//    c) Quadratic time complexity  
//    d) Logarithmic time complexity  

// **2. Which complexity is the best for an algorithm?**
//    a) O(n)  
//    b) O(log n) ✅  
//    c) O(n²)  
//    d) O(2ⁿ)  

// **3. What is the time complexity of Binary Search?**
//    a) O(n)  
//    b) O(log n) ✅  
//    c) O(n²)  
//    d) O(n log n)  

// **4. Which of the following is the worst time complexity?**
//    a) O(n)  
//    b) O(n²)  
//    c) O(2ⁿ) ✅  
//    d) O(n log n)  

// **5. What is the best case time complexity of QuickSort?**
//    a) O(n log n) ✅  
//    b) O(n²)  
//    c) O(n)  
//    d) O(1)  

// **6. What is the space complexity of an iterative algorithm with no extra memory usage?**
//    a) O(n)  
//    b) O(1) ✅  
//    c) O(n²)  
//    d) O(log n)  

// **7. Which sorting algorithm has O(n log n) complexity in all cases?**
//    a) Merge Sort ✅  
//    b) Quick Sort  
//    c) Bubble Sort  
//    d) Selection Sort  

// **8. Which complexity is the worst for large input sizes?**
//    a) O(log n)  
//    b) O(n)  
//    c) O(n!) ✅  
//    d) O(n log n)  

// **9. What is the worst-case time complexity of Bubble Sort?**
//    a) O(n log n)  
//    b) O(n²) ✅  
//    c) O(n)  
//    d) O(1)  

// **10. What is the time complexity of the Fibonacci series using recursion?**
//    a) O(n)  
//    b) O(n log n)  
//    c) O(2ⁿ) ✅  
//    d) O(n²)  

// ---

// This note provides a structured understanding of **Big O Notation and Complexity Analysis** in C++ along with MCQs for practice. 🚀

