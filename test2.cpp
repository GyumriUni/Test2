#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Asking for user input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Calling the function and displaying the result
    int sum = add(num1, num2);
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
