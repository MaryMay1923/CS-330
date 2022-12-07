#include <iostream>

float inchesToCm(float inches) {
    float cm = inches * 2.54;
    return cm;
  }
int main() {
  float ruler = 12;
  cout << inchesToCm(12); //outputs 30.48
  
  int count = 1;
  while (count <= 5) {
    std::cout << count;
    count++;
  } //outputs 12345
  
  int person = 1;
  do {
    std::cout << "Where is everyone?" <<endl;
  } while (person < 1); //outputs "Where is everyone?"
  
  for (int i = 1; i <= 5; i++) {
    std::cout << i;
  } //outputs 12345
  
  int numlist[5] = {1, 2, 3, 4, 5};
  for (int number : numlist) {
    std::cout << number;
  } // outputs 12345
  
  float inchesToCm(float inches) {
    float cm = inches * 2.54;
    return 
  }
  float ruler = 12;
  cout << inchesToCm(12);
}
