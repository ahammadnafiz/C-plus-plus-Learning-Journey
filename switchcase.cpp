#include <iostream>

int main(){

    /*
    switch(expression){
        case constant1:
            statement1;
            break;
        case constant2:
            statement2;
            break;
        case constant3:
            statement3;
            break;
        default:
            statement4;
    }
    */

    // int month;
    // std::cout << "Enter the Month (1-12): ";
    // std::cin >> month;

    // switch (month){
    //     case 1:
    //         std::cout << "January" << '\n';
    //         break;
    //     case 2:
    //         std::cout << "February" << '\n';
    //         break;
    //     case 3:
    //         std::cout << "March" << '\n';
    //         break;
    //     case 4:
    //         std::cout << "April" << '\n';
    //         break;
    //     case 5:
    //         std::cout << "May" << '\n';
    //         break;
    //     case 6:
    //         std::cout << "June" << '\n';
    //         break;
    //     case 7:
    //         std::cout << "July" << '\n';
    //         break;
    //     case 8:
    //         std::cout << "August" << '\n';
    //         break;
    //     case 9:
    //         std::cout << "September" << '\n';
    //         break;
    //     case 10:
    //         std::cout << "October" << '\n';
    //         break;
    //     case 11:
    //         std::cout << "November" << '\n';
    //         break;
    //     case 12:
    //         std::cout << "December" << '\n';
    //         break;
    //     default:
    //         std::cout << "Invalid Month" << '\n';
    // }


    char grade;
    std::cout << "What is your grade? ";
    std::cin >> grade;

    switch (grade){
    case 'A':
        std::cout << "Excellent" << '\n'; break;
    case 'B':
        std::cout << "Good" << '\n'; break;
    case 'C':
        std::cout << "Average" << '\n'; break;
    case 'D':
        std::cout << "Below Average" << '\n'; break;
    case 'F':
        std::cout << "Fail" << '\n'; break;
    default:
        std::cout << "Invalid Grade" << '\n';
    }

    return 0;
}