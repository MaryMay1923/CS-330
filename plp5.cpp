int main() {
  class Person {
  // we'll explain 'public' later
  public:
    std::string name;
    int age;
 
  void banner() {
    std::cout << name << " is " << age << " years old.\n";
    }
  };

  class Student: public Person  {
public:
  std::string major;
 
  void info() {
    std::cout << name << " is a " << major << " major.\n";
  }
};

  Person mary;
  mary.name = "Mary";
  mary.age = 21;
  mary.banner();

  Student mary_may;
  mary_may.name = "Mary May";
  mary_may.age = 21;
  mary_may.major = "Computer Science";
  mary_may.banner();
  mary_may.info();

  mary_may.age += 1;
  mary_may.banner();
}
