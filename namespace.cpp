#include <iostream>

namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

int main(){

  /* Namespace = Provides a solution for preventing name conflicts in large projcets
    Each entity need a unique name. A namespace allows for identically named entities
    as long as the namepsaces are different
  */

  // int x = 0;

  // don't need to add prefix
  using namespace first;
  

  // std::cout << x << '\n';
  std::cout << x << '\n';
  std::cout << second::x << '\n';

  

  return 0;
}
