#include <iostream>

void displayMenu() {
    std::cout << "Calculator Menu:" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Choose an operation: ";
}

void performAddition() {
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Result: " << num1 + num2 << std::endl;
}

void performSubtraction() {
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Result: " << num1 - num2 << std::endl;
}

void performMultiplication() {
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Result: " << num1 * num2 << std::endl;
}

void performDivision() {
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    if (num2 != 0) {
        std::cout << "Result: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }
}

int main() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                performAddition();
                break;
            case 2:
                performSubtraction();
                break;
            case 3:
                performMultiplication();
                break;
            case 4:
                performDivision();
                break;
            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
