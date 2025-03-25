#include <iostream>


int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.length() << '\n';

    if (name.length() > 10){
        std::cout << "Your name is too long" << '\n';
    }
    else{
        std::cout << "Your name is short" << '\n';
    }

    if (name.empty()){
        std::cout << "You didn't enter your name" << '\n';
    }
    else{
        std::cout << "You entered your name" << '\n';
    }

    // name.clear();

    name.append("@outlook.com");

    std::cout << name << '\n';
    std::cout << name.at(0) << '\n';
    std::cout << name.at(1) << '\n';


    name.insert(0, "Mr. ");
    std::cout << name << '\n';


    std::cout << name.find("outlook") << '\n';

    // name.erase(0, 4);
    // std::cout << name << '\n';

    return 0;
}