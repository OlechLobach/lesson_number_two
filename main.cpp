#include <iostream>

int main() {
    double R1, R2, R3;
    std::cout << "Enter the value of resistor R1: ";
    std::cin >> R1;
    std::cout << "Enter the value of resistor R2: ";
    std::cin >> R2;
    std::cout << "Enter the value of resistor R3: ";
    std::cin >> R3;
    double R0 = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
    std::cout << "The equivalent resistance R0 is: " << R0 << " ohms" << std::endl;

    return 0;
}
