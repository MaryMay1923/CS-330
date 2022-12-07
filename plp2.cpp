#include <iostream>
using namespace std;

int main() {
  int best_number = 3; //initialize variable
  cout << best_number<<endl; //outputs 3
  best_number = 5; //updated value
  cout << best_number<<endl; //outputs 5
  best_number = "a"; //doesn't work

  int best_number = 3; //initialize variable
  float worst_number = 0.33;
  float togetherF = best_number + worst_number; //outputs 3.33
  int togetherI = best_number + worst_number; //outputs 3
  cout << togetherI<<endl;
  
  return 0;
}
