#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;

// with usign keyword

using text_t = std::string;
using number_t = int;


int main(){

  /* 
  
  typedef = reversed keyword used to create an additional name (alias) for another
  data type. New identifier for an existing type Helps with readibility and reduces
  typos, Use when there is clear benefit
  Replaced with 'using' (work better w/ templates)

  */

  // std::string firstName = "ahammad nafiz";
  
  // we can do the same name alias with typedef

  text_t firstName = "Ahammad Nafiz";
  number_t age = 21;


  std::cout << firstName << '\n';
  std::cout << age << '\n';

  return 0;
}
