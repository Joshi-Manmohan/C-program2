// Calculator by C++
#include <iostream>

int main() {
    char operation;
    double num1, num2;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (operation) {
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            std::cout << num1 / num2;
            break;
        default:
            std::cout << "Invalid operator";
    }
    return 0;
}
