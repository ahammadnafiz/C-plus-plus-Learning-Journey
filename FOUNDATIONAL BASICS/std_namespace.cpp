#include <iostream>
// using namespace std;


int main(){
  
  // safer alternative
  using std::cout;
  using std::string;
 

  string name = "nafiz";
  cout << "Hello " << name << '\n';
  
  return 0;
}
