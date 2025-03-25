#include <iostream>

int main() {
    int age;

    std::cout << "Enter Your Age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "welcome to the site" << '\n'; // Add newline to clean up the output
    }
    else if (age == 17) {
        std::cout << "You are almost old enough to enter this site" << '\n';
    }
    else if (age == 0) {
        std::cout << "You Haven't born yet" << '\n';
    }
    else{
        std::cout << "You are not old enough to enter this site" << '\n';
    }

    return 0;
}