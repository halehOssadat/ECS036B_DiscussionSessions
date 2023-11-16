/*
Inline functions in C++ provide a way for the compiler to insert the code of the function directly* at
 the point where the function is called, instead of executing a call instruction to the function. 
This can lead to performance improvements in certain scenarios, but it's important to use inline 
functions judiciously. Here are some scenarios where inline functions can be useful:

    Small Functions:
    Inline functions are most effective for small functions. If a function has a very small body, 
    the overhead of a function call may be more significant than the actual execution of the function. Inlining such functions can eliminate the overhead of the function call.

    Frequent Function Calls:
    If a function is called frequently, especially in tight loops,
     inlining can reduce the overhead associated with the function call and improve performance.

    Getters and Setters:
    Inline functions are often used for simple getter and setter methods in classes. 
    These methods typically have small bodies and are called frequently, making them good candidates 
    for inlining.

    Performance-Critical Code:
    Inlining can be beneficial in performance-critical code sections where every CPU cycle counts.
    However, it's essential to profile and measure performance before and after applying inline 
    directives to ensure a real performance improvement.

It's important to note that the decision to inline a function is ultimately made by the compiler.
The inline keyword is a suggestion to the compiler, and modern compilers may choose to ignore it if 
they believe that inlining is not beneficial. Additionally, inlining can increase the size of the
 executable, so it's a trade-off between speed and size.

In general, it's a good practice to rely on the compiler's optimization capabilities and 
only use the inline keyword when there is a clear performa

nce benefit, backed by profiling and benchmarking.

*/

#include <iostream>

// Inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    // Lambda function
    // Capture closure: A lambda can introduce new variables in its body (in C++14), and it can also access, or capture, variables
    // from the surrounding scope. A lambda begins with the capture clause. 
    //It specifies which variables are captured, and whether the capture is by value or by reference. 
    //Variables that have the ampersand (&) prefix are accessed by reference and variables that don't have it are accessed by value.
    //An empty capture clause, [ ], indicates that the body of the lambda expression accesses no variables in the enclosing scope.
    
    auto addLambda = [](int a, int b) {
        return a + b;
    };

    // Call the lambda function
    int resultLambda = addLambda(3, 4);

    int result = add(3, 4);
    std::cout << "Result: " << result << ", Result lambda function: " << resultLambda << std::endl;
    return 0;
}