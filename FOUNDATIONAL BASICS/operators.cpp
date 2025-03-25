#include <iostream>


int main(){

    /*
    && = check if twol conditions are true
    || = check if at least one of two conditions are true
    ! = check if the condition is false
    */

    int temp;
    bool isSnowing = true;
    bool isRaining = false;
    std::cout << "Enter the Temperature: ";
    std::cin >> temp;

    if(temp > 30){
        std::cout << "It's Hot" << '\n';
    }
    else if(temp >= 20 && temp <= 30){
        std::cout << "It's Warm" << '\n';
    }
    else if(temp < 20 && temp >= 10){
        std::cout << "It's Cold" << '\n';
    }
    else if(!(temp >= 0) || temp < -10){
        std::cout << "It's Extremely Freezing" << '\n';
    }
    else{
        std::cout << "It's Freezing" << '\n';
    }

    if(isSnowing && temp <= 0){
        std::cout << "It's Snowing" << '\n';
    }
    else if(isRaining && temp >= 0){
        std::cout << "It's Raining" << '\n';
    }
    else{
        std::cout << "It's Sunny" << '\n';
    }


    return 0;
}