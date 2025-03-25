#include <iostream>

int main(){

    char operation;
    double num1, num2;
    double result;

    std::cout << "********** Calculator **********" << '\n';
    std::cout << "Enter Operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter First Number: ";
    std::cin >> num1;

    std::cout << "Enter Second Number: ";
    std::cin >> num2;

    switch (operation){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "Invalid Operation" << '\n';
    }


    return 0;
}