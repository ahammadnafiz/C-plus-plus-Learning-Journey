#include <iostream>


int main(){
  
  /*
  
  cout << (insertion operator)
  cin >> (extraction operator)

  */

  std::string name;
  int age;

  std::cout << "What's your age:" << '\n';
  std::cin >> age;



  std::cout << "Enter Your Name:" << '\n';

  // std::cin >> name;
  // to get input with white space
  std::getline(std::cin >> std::ws, name);


  std::cout << "Hello, " << name << '\n';
  std::cout << "You are " << age << " old" << '\n';



  return 0;
}
