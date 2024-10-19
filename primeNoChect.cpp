#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (isPrime(number))
        std::cout << number << " is a prime number." << std::endl;
    else
        std::cout << number << " is not a prime number." << std::endl;

    return 0;
}
