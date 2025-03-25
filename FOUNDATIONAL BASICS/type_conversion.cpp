#include<iostream>

int main(){

  /*
  
  type conversion = conversion a value of one data type to another 
  Implicit = automatic
  Explicit = Precede value with new data type (int)

  */

  // int x = 3.14;
  
  // double x = (int) 3.14;


  // char x = 100;
  
  // std::cout << x << '\n';
  
  // std::cout << (char) 100 << '\n';
  
  int correct = 8;
  int question = 10;

  double score = correct / (double) question * 100;
  std::cout << score << "%" << '\n';

  return 0;
}
