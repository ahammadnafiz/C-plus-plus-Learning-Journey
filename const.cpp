#include <iostream>

int main(){

  const double PI = 3.1416; // Now we can't change the value of PI
  double radius = 4;
  double result = 2 * PI * radius;

  std::cout << "Result " << result << " cm" << '\n';


  // some more examples

  const int LIGHT_SPEED = 299792458;
  


  return 0;
}
