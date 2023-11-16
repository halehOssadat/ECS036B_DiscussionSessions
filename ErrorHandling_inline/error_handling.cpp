#include <iostream>
#include <stdexcept>

// Function that throws an exception
double divide(double numerator, double denominator) noexcept(false) {
    if (denominator == 0.0) {
        throw std::invalid_argument("Division by zero is not allowed");
        //throw std::runtime_error("Zero Division is not possible.");
    }

    return numerator / denominator;
}

int main() {
    try {
        // Attempt to perform division
        double result = divide(10.0, 2.0);
        std::cout << "Result of division: " << result << std::endl;
        // Attempt to perform division with a denominator of 0
        result = divide(5.0, 0.0); // This will throw an exception
        std::cout << "This line won't be executed." << std::endl;
    } catch (const std::invalid_argument& e) {
        // Catch and handle the exception
        std::cerr << "Exception caught: " << e.what() << std::endl;
   } catch (...) {
        // Catch any other unexpected exceptions
        std::cerr << "An unexpected exception occurred." << std::endl;
    }

    return 0;
}
