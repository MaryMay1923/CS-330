#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Profile {
  public:
    //set things up
    std::string name;
    int age;
    std::string city;
    std::string gender;
    std::vector<std::string> hobbies;
    std::vector<std::string> preferences;
    std::vector<std::string> pronouns;
  
  public:
    //make it so Profile must have name, age, city, and your own gender
    Profile(std::string new_name, int new_age, std::string new_city, std::string new_gender);
    //print out information about the person
    void view_bio() {
      std::cout << name << " is a " << age << " year old " << gender << ". \n"; 
      if(pronouns.size() > 0) {
        std::cout << "The pronouns " << name << " uses are: \n";
        for (std::string noun : pronouns) {
          std::cout << noun << "\n";
        }
      }
      if(hobbies.size() > 0) {
      std::cout << "Their hobbies include:\n";
      for (std::string hobby : hobbies) {
        std::cout << hobby << "\n";
      }
      }
    }
    //add to items that have multiple things
    void add_hobby(std::string new_hobby) {
      hobbies.push_back(new_hobby);
    }
    void add_preference(std::string new_preference) {
      preferences.push_back(new_preference);
    }
    void add_pronouns(std::string new_pronouns) {
      pronouns.push_back(new_pronouns);
    }
    //creepy dating
    int max_age() {
      int max = (age-7)*2;
      return max;
    }
    int min_age() {
      int min = age/2+7;
      return min;
    }
};

//make it so Profile creation must have these things
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_gender){
      name = new_name;
      age = new_age;
      city=new_city;
      gender=new_gender;
    };

//Compare if two Profiles are compatable at face value
bool compare(Profile date1, Profile date2) {
    if (!(date1.age > date2.min_age() && date1.age < date2.max_age() && date2.age > date1.min_age() && date2.age < date1.max_age() && date1.city == date2.city)){
      return false;
    }
    if (date1.preferences.size() == 0 && date2.preferences.size() == 0){
      return true;
      }
    else if (date1.preferences.size() > 0 && date2.preferences.size() == 0){
      for (std::string pref : date1.preferences){
        if(pref == date2.gender){
          return true;
        }}
        return false;
        }
    else if (date2.preferences.size() > 0 && date1.preferences.size() == 0){
      for (std::string pref : date2.preferences){
        if(pref == date1.gender){
          return true;
        }}
        return false;
        }
    else {
      for (std::string pref : date1.preferences){
        if(pref == date2.gender){
          for (std::string ferp : date2.preferences){
            if(ferp == date1.gender){
              return true;
              }}}}
        return false;
      }
      return false;
    };
 


int main() {
Profile mary("Mary", 21, "Boston", "Woman");
Profile ray("Ray", 23, "Boston", "Man");
std::cout << compare(mary, ray);
}
