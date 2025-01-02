#include <iostream>
#include <stdexcept>  // For runtime_error

int main() {
    float x, y;
    std::cout << "Enter First Value: ";
    std::cin >> x;
    std::cout << "Enter Second Value: ";
    std::cin >> y;
    
    try {
        if (y == 0) {
            throw std::runtime_error("Value is zero. Division by zero error.");
        }
        double ans = x / y;
        std::cout << "Division result is: " << ans << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error Code: " << e.what() << '\n';
    }

    return 0;
}
