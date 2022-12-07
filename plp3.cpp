#include <iostream>

int main()
{
  bool to_print = true; //initialize variable
  cout << to_print << endl; //outputs 1
  
  int people = 1;
  string hello = ""; //declaired here so its within the scope
  
  if (people > 1) {
    hello = "Hello everyone!";
  }
  else if (people == 1) {
    hello = "Hey!";
  }
  else {
    hello = "Where is everyone?";
  }
  cout << hello << endl; //outputs "Hey!"
  
  /*if there's more than one person, hello = "Hello everyone!"
    otherwise, hello = "Hey!"*/
  string hello = (people >1) ? "Hello everyone!" : "Hey!";
  cout << hello << endl; //outputs "Hey!"
  
  switch (people) {
  case 0:
    std::cout << "Where is everyone?\n";
    break;
  case 1:
    std::cout << "Hey!\n";
    break;
  case 2:
    std::cout << "Hi you two!\n";
    break;
  default:
    std::cout << "Hello everyone!\n";
    break;
}
  
}
