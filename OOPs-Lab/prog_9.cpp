#include <iostream>

double divideNumbers(double dividend, double divisor) {
    if (divisor == 0) {
        throw std::runtime_error("Divisor cannot be zero!");
    }
    return dividend / divisor;
}

int main() {
    double dividend, divisor;
    try {
        std::cout << "Enter the dividend: ";
        std::cin >> dividend;

        std::cout << "Enter the divisor: ";
        std::cin >> divisor;

        double result = divideNumbers(dividend, divisor);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
