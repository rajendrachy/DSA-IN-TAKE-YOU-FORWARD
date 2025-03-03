// # ----------------------------**Complexity of Algorithm in C++**-------------------------------


// ## ------------------**1. Introduction**---------------------------
// Algorithm complexity refers to the performance of an algorithm in terms of **time** and **space** as input size grows.
// It helps in analyzing how efficiently an algorithm solves a problem.



// ## -------------------------**2. Types of Algorithm Complexity**-----------------------------------

// ### -----------------------**A. Time Complexity**-----------------------
// - Measures the total time taken by an algorithm to execute.
// - Expressed using **Big-O Notation (O)**.
// - Common complexities:
//   - **O(1) - Constant Time**
//   - **O(log n) - Logarithmic Time**
//   - **O(n) - Linear Time**
//   - **O(n log n) - Linearithmic Time**
//   - **O(n^2) - Quadratic Time**
//   - **O(2^n) - Exponential Time**
//   - **O(n!) - Factorial Time**





// ### ------------------------**B. Space Complexity**-----------------------------------
// - Measures the memory required by an algorithm.
// - Includes **input size, auxiliary space, and call stack usage**.
// - Expressed using Big-O notation similar to time complexity.





// ## -------------------------**3. Best, Worst, and Average Cases**-------------------------------------------
// - **Best Case**: Minimum time required for execution (e.g., searching in a sorted list).
// - **Worst Case**: Maximum time required for execution (e.g., searching in an unsorted list).
// - **Average Case**: Expected time required under typical conditions.






// ## -----------------------**4. Common Algorithm Complexities in C++**-----------------------------------------
// | Algorithm | Best Case | Worst Case | Average Case |
// |-----------|----------|------------|--------------|
// | Bubble Sort | O(n) | O(n^2) | O(n^2) |
// | Quick Sort | O(n log n) | O(n^2) | O(n log n) |
// | Merge Sort | O(n log n) | O(n log n) | O(n log n) |
// | Binary Search | O(1) | O(log n) | O(log n) |
// | Linear Search | O(1) | O(n) | O(n) |





// ## --------------------------**5. How to Calculate Complexity?**---------------------------
// - Count **loops** (single loop → O(n), nested loop → O(n^2)).
// - Consider **recursions** (solved using recursion trees and Master’s Theorem).
// - Ignore **constants and lower order terms**.





// ## --------------------------**6. Example in C++**-------------------------------
// ```cpp```
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
// -----------------------------**Time Complexity:** O(n)----------------------------------







// ##---------------------------- **7. Conclusion**--------------------------
// Understanding algorithm complexity is crucial for writing efficient C++ programs. Always aim for optimized solutions with minimal time and space complexity.

// ---






// # --------------------**MCQs on Algorithm Complexity**------------------------------

// **1. What does O(n) represent?**
//    a) Constant time complexity  
//    b) Linear time complexity ✅  
//    c) Quadratic time complexity  
//    d) Logarithmic time complexity  





// **2. Which notation is used to express worst-case complexity?**
//    a) Omega (Ω)  
//    b) Theta (Θ)  
//    c) Big-O (O) ✅  
//    d) None of the above  






// **3. What is the worst-case time complexity of QuickSort?**
//    a) O(n log n)  
//    b) O(n^2) ✅  
//    c) O(n)  
//    d) O(1)  







// **4. How does the complexity of Binary Search vary?**
//    a) O(n)  
//    b) O(log n) ✅  
//    c) O(n^2)  
//    d) O(1)  





// **5. Which sorting algorithm has the best worst-case complexity?**
//    a) Bubble Sort  
//    b) Selection Sort  
//    c) Merge Sort ✅  
//    d) Quick Sort  







// **6. What is the space complexity of an in-place sorting algorithm?**
//    a) O(n)  
//    b) O(log n)  
//    c) O(1) ✅  
//    d) O(n^2)  







// **7. Which of the following complexities is the fastest?**
//    a) O(n!)  
//    b) O(n^2)  
//    c) O(log n) ✅  
//    d) O(2^n)  







// **8. What is the best case time complexity of Linear Search?**
//    a) O(n)  
//    b) O(log n)  
//    c) O(1) ✅  
//    d) O(n^2)  






// **9. Which complexity is considered **not practical**?**
//    a) O(n log n)  
//    b) O(n^2)  
//    c) O(2^n) ✅  
//    d) O(log n)  








// **10. What is the average time complexity of Merge Sort?**
//    a) O(n^2)  
//    b) O(n log n) ✅  
//    c) O(n)  
//    d) O(log n)  

// ---

// This note gives a structured understanding of algorithm complexity with examples and MCQs for practice. 🚀