#include <iostream>

int main() {
  class Person { //name of class
  public:
    std::string name; //name variable
    int age; //age variable
 
  void banner() {
    std::cout << name << " is " << age << " years old.\n";
    } //method
  };

  class Student: public Person  { //inherits from Person class
public:
  std::string major; //new variable
 
  void info() {
    std::cout << name << " is a " << major << " major.\n";
  } //new method
};

  Person mary;
  mary.name = "Mary";
  mary.age = 21;
  mary.banner(); //outputs "Mary is 21 years old."

  Student mary_may;
  mary_may.name = "Mary May";
  mary_may.age = 21;
  mary_may.major = "Computer Science";
  mary_may.banner(); //outputs "Mary May is 21 years old."
  mary_may.info(); //outputs "Mary May is a Computer Science major."

  mary_may.age += 1; //updates mary_may age
  mary_may.banner(); //outputs "Mary May is 22 years old."
}
